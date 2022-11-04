// SumOfRange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd 
//Program Title: Sum Of Range
//Program Description: Uses Two Iterations to take the Summation of a Range of Numbers given by the User, using loops and if else statements. 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std; 

int main()
{
	//Variable Declarations 
	int min, max;
	int sum = 0;


	//Program Title and Description for the User
	cout << "Program Title: Sum of Range" << endl;
	cout << "Program Description: In the First Iteration of the Program it is testing to see if the program is working correctly," << endl;
	cout << " by taking a range of numbers and getting the sum from them all collectively." << endl; 
	

		//User Input
	cout << "First Iteration!" << endl << endl; 

	cout << "Below you are going to Enter the Minimum and Maximum Numbers, for the Range of Numbers you would like to calculate." << endl;
	cout << "For Example; I want to get the Summation of the Range of Numbers between 4 and 18." << endl; 
	cout << "So my Minimum Number would be 4, and the Maximum Number would be 18." << endl << endl;

	cout << "Enter your Minimum Number Here: ";
	cin >> min;

	cout << "Enter your Maximum Number Here: ";
	cin >> max;

	for (int i = min; i <= max; i++) {
		sum = sum + i;

	}
	//Output to the Screen 

	cout << "The Summantion of the Range of Numbers from " << min << " to " << max << " is " << sum << "." << endl;
	cout << endl << endl;



	//Variable Declarations 
	int min1, max1; 
	int sum1 = 0; 

	//Program Title and Description for the User
	cout << "Program Title: Sum of Range" << endl;
	cout << "Program Description: In the Second Iteration of the Program it is taking the First Iteration and adding parameters, by only allowing," << endl;
	cout << " a range from (0 to 50) and then adding loops to ensure it goes by those conditions." << endl; 


	//User Input
	cout << "Second Iteration!" << endl << endl; 

	cout << "Below you are going to Enter the Minimum and Maximum Numbers, for the Range of Numbers you would like to \ncalculate between (0 to 50)." << endl;
	cout << "For Example; I want to get the Summation of the Range of Numbers between 4 and 18. " << endl; 
	cout << "So my Minimum Number would be 4, and the Maximum Number would be 18." << endl << endl;

	do {
		cout << "Enter your Minimum Number Here (between 0 to 50): ";
		cin >> min1;

		if (!cin) {
			cout << "Program Terminating!" << endl << endl;
			return 1;
		}
		if (min1 < 0 || min1 > 50) {
			cout << "You need to Input a Value within the Range between (0 to 50); Please Try Again!" << endl << endl;
		}
	} while (min1 < 0 || min1 > 50);

	do {
		cout << "Enter your Maximum Number Here (between 0 to 50): ";
		cin >> max1;

		if (!cin) {
			cout << "Program Terminating!" << endl << endl;
			return 1;
		}
		if (max1 < 0 || max1 > 50) {
			cout << "You need to Input a Value within the Range between (0 to 50); Please Try Again!." << endl << endl;
		}

	} while (max1 < 0 || max1 > 50);


	for (int i = min1; i <= max1; i++) {
		sum1 = sum1 + i;

	}
	//Output to the Screen 

	cout << "The Summantion of the Range of Numbers from " << min1 << " to " << max1 << " is " << sum1 << "." << endl;



	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
