//Module 9 Assignment 2 Sales Bar Chart designed to display data in astericks of $100's
//Written by <Davis Booth>
#include <iostream>
using namespace std;

int main()

{
	//Declared Variables
	int store1sales = 0;
	int store2sales = 0;
	int store3sales = 0;
	int store4sales = 0;
	int store5sales = 0;
	int counter = 0;

	//Ask user for input
	cout << "Enter today's sales for store #1: ";
	cin >> store1sales;
	cout << "Enter today's sales for store #2: ";
	cin >> store2sales;
	cout << "Enter today's sales for store #3: ";
	cin >> store3sales;
	cout << "Enter today's sales for store #4: ";
	cin >> store4sales;
	cout << "Enter today's sales for store #5: ";
	cin >> store5sales;
	cout << endl;

	//Display Title for output
	cout << "SALES BAR CHART" << endl;
	cout << "(Each * = $100)" << endl;
	cout << endl;

	//Display Calculated astericks for data using for loop
	cout << "Store 1: ";
	for (counter = 0; counter < store1sales / 100; counter++)
		cout << '*';
	cout << endl;
	cout << "Store 2: ";
	for (counter = 0; counter < store2sales / 100; counter++)
		cout << '*';
	cout << endl;
	cout << "Store 3: ";
	for (counter = 0; counter < store3sales / 100; counter++)
		cout << '*';
	cout << endl;
	cout << "Store 4: ";
	for (counter = 0; counter < store4sales / 100; counter++)
		cout << '*';
	cout << endl;
	cout << "Store 5: ";
	for (counter = 0; counter < store5sales / 100; counter++)
		cout <<'*';
	cout << endl;

	system("PAUSE");
	return 0;
}






