// assessment - Username.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <dos.h>

using namespace std;

int main()
{
	string firstName = ""; //initialises firstName variable
	string surname = ""; //initialises surname variable
	string userName = ""; //initialises userName variable

	cout << "Hello\n welcome to the username generator" << endl << "Please can you enter your first name" << endl; 
	cin >> firstName; //takes entry of the first name
	cout << "Thank you\n\n" << "next, Please will you enter your surname (last name)" << endl;
	cin >> surname; //takes entry of the surname
	cout << "\nThank you\n";
	cout << "i am now calculating your username, please bear with me";
	Sleep(750); 
	cout << "."; 
	Sleep(750);
	cout << ".";
	Sleep(750);
	cout << ".";
	Sleep(750);
	cout << ".\n";
	Sleep(1000);
	
	firstName[0] = tolower(firstName[0]);
	surname[0] = toupper(surname[0]); //this makes the first letter of the surname an uppercase letter if it was not typed in as one
	
	userName = firstName[0] + surname; //creates username
	string message = "i have created your username, your username is ";
	int length = userName.length(); //gets length of the username
	int anotherLength = message.length(); //gets length of the message 
	int i = 0;
	int j = 0;
	
	for (j = 0; j <= anotherLength; j++)
	{
		Sleep(100);
		cout << message[j]; //displays message 
	}
	for(i = 0; i <= length; i++)
	{
		Sleep(100);
			cout << userName[i]; //displays username
	}
	
	cin.get();
	cin.ignore();
	
return 0;
}

