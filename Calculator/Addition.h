#ifndef ADDITION_H
#define ADDITION_H

#include <iostream>
#include <limits>
using std::numeric_limits;
using std::cin;
using std::cout;
using std::endl;

//This function gets input and adds them
//preCondition: Takes in nothing, calculates numbers withing function.
//postCondition: Returns the answer as a float.

float addition()
{
	char restart;
	int nums;
	float ans;
	float ansttl = 0;
	bool redo;
	//Control the function with do while loop.
	do
	{
		//Prompt user for the amount of numbers to add.
		cout << "How many numbers are you wanting to add? " << endl;
		cin >> nums;
		//Validation
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "Please enter a number." << endl;
		}
		else
		{
			for (int i = 0; i < nums; i++)
			{
				cout << i + 1 << ") Please enter number " << endl;
				cin >> ans;
				ansttl = ansttl + ans;
			}
			cout << "Your total is " << ansttl << endl;
			return ansttl;
			cout << "Add again? y/n" << endl;
			cin >> restart;
			if (restart == 'y' || restart == 'Y')
			{
				redo = true;
			}
			else
			{
				redo = false;
			}
		}

	} while (redo == true);
}


#endif
