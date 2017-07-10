// This Program calculates bank charges for commercial checking account customers
// Written by <Davis Booth><06/24/2017>


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declared Variables
	long int accountnumber;
	double currentbalance;
	int numberofchecks;
	int customercharge = 10;
	double checkcharge;
	int balancefee = 15;

	//Greeting Ask for User Input
	cout << "Welcome to Blue Eagles Credit Union "<<endl;
	cout <<endl;
	cout <<endl;
	cout << "Please enter you account number "<<endl;
	cout <<endl;
	cin >> accountnumber;
	cout << endl;
	cout << "Please enter your account balance " << endl;
	cout << endl;
	cin >> currentbalance;
	cout << endl;
	cout << "Please enter total number of checks written " << endl;
	cout << endl;
	cin >> numberofchecks;
	cout << endl;

	//Calculate New Balance
	if (currentbalance < 400)
		currentbalance = currentbalance - balancefee;

	//Calculate Check Charge
	if (numberofchecks >= 60)
		checkcharge = numberofchecks * .03;
	else if (numberofchecks >= 40)
		checkcharge = numberofchecks * .05;
	else if (numberofchecks >= 20)
		checkcharge = numberofchecks * .08;
	else if (numberofchecks <= 19)
		checkcharge = numberofchecks * .10;
	double newcurrentbalance = currentbalance - checkcharge - customercharge;


	//Warning Sign for Negative Balance
	if (newcurrentbalance <= 0)
	{
		cout << "-------WARNING-------" << endl;
		cout << endl;
		cout << "You have a NEGATIVE BALANCE " << endl;
		cout << "Please contact: " << endl;
		cout << "The Blue Eagles Credit Union" << endl;
		cout << endl;
		cout << "!!!!!!	ASAP !!!!!!!! " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}

	//Display Report
	cout << "Below is you Account Information: " << endl;
	cout << endl;
	cout <<"Account Number " << left << accountnumber << endl;
	cout <<"Current Balance " << left << setprecision(2) << fixed <<"$"<< newcurrentbalance << endl;
	if (currentbalance < 400)
		cout <<"Balance Fee " << left << setprecision(2) << fixed <<"$"<< balancefee << endl;
	cout <<"Number of Checks Written " << left<< numberofchecks << endl;
	cout <<"Charges for Checks Written Fee " << left<<"$" << setprecision(2) << fixed << checkcharge << endl;
	cout <<"Monthly Customer Charge " << left <<"$" << setprecision(2) << fixed << customercharge << endl;
	cout << endl;
	cout <<endl;
	cout <<endl;
	system("pause");

	return 0;

} 
