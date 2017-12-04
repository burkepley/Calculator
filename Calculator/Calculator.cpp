// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Addition.h"

using std::cin;
using std::cout;
using std::endl;


float addition();
float subtraction();
int main()
{
	int choice;
	char redo;
	cout << "Enjoy My Calculator! " << endl;
	cout << "Please choose a number: " << endl;
	bool restart = true;
	//Control the program.
	do 
	{
		//User Chooses an option.
		cout << "1) Addition" << endl;
		cout << "2) Subtraction" << endl;
		cin >> choice;
		//Result of choice
		switch (choice)
		{
		case 1:
			addition();
			break;
		}
//			case 2:
//				subtraction();
//				break;
//		}
		// Gets choice to redo
		cout << "Would you like to redo? y/n " << endl;
		cin >> redo;
		if (redo == 'Y' || redo == 'y')
		{
			restart = true;
		}
		else
		{
			restart = false;
		}
	}
	while (restart == true);
	
    return 0;
}

