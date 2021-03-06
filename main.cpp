#include "HTTPPerform.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdio.h>


int main(int argc, char** argv) {
	HTTPPerform *performer = new HTTPPerform("https://10.155.10.213:443/soberstore");
	applications* appList;	
	try {			
		appList = performer->perform(SHOW,19);
		if (performer->getError() == 1)
 			cout << "Error occured during HTTP request :" << performer->getErrorMessage() << endl;
 		else if (appList->apps != NULL)
 		{
 			for(int i=0;i< appList->size; i++)
				{							
					cout << "Application "<< to_string(i) << endl;
					cout << "\t" << "id: " << to_string(appList->apps[i].id)<<endl;
					cout << "\t" << "name: " << (appList->apps[i].name)<<endl;
					cout << "\t" << "developer name: " << (appList->apps[i].developerName)<<endl;
					cout << "\t" << "icon: " << (appList->apps[i].iconName)<<endl;
					cout << "\t" << "size: " <<	(appList->apps[i].size)<<endl;
					cout << "\t" << "cgroup: " <<(appList->apps[i].cgroup)<<endl;			
				}
 		}
 		if(appList->apps->isInstalled == 1 && appList->apps->isDownloaded) 
			cout << "Application installed" << endl;			
		else 		
			cout << "Error occured: " << appList->apps->errorCode << endl;		
		
	
	}
	
	catch(exception &e)
        {
            cout << "Exception!:" << e.what() << endl;           
        }
		
	return 0;
}