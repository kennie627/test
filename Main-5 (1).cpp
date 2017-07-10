// A program that uses a sentinel value.
// Written By <Davis Booth><07/02/2017>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number = 0;
	int totalnumber = 0;

	cout << "This program is going to count how many times you input a number." << endl;
	cout << "Please enter a positive number/ must be an integer." << endl;
	cout << "Type -1 when you would like to quit." << endl;
	cin >> number;

	

	while (number > 0)
	{
		cout << "Please enter another number. " << endl;
		cout << "Type -1 when you would like to quit. " << endl;
		cin >> number;
		totalnumber++;
	}
	cout << "Total times a number was entered = " << totalnumber << endl;

	system("pause");
	return 0;


}