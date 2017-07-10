// This programs calculates the gross sales and net profit for a vegetable farm.
// Written by <Davis Booth><05/29/2017>
#include <iostream>
using namespace std;

int main()
{
	//Constants for vegetable prices
	//This is a good habit to form because these prices can change
	//And you would not like to change hundreds of lines of code
	const double CORN_PRICE = .45;
	const double PEANUTS_PRICE = .75;
	const double CORN_COSTTOPRODUCE = .15;
	const double PEANUTS_COSTTOPRODUCE = .25;

	// Variables
	int Peanutsgrown;     //Number of pounds of peanuts grown
	int Peanutssold;      //Number of pounds peanuts sold
	int Corngrown;        //Number of ears of corn grown
	int Cornsold;         //Number of ears of corn sold

	//Menu Title
	cout << "Welcome to the Vegetable Growers of Middleton, North Carolina"<< endl; 
	cout << " ***P/L Calculator***" << endl; 

	//Read number of ears corn grown and sold
	//then the number of pounds of peanuts grown and sold
	cout << " Enter the number of ears of corn grown: ";
	cin >> Corngrown;
	cout << " Enter the number of ears sold: ";
	cin >> Cornsold;
	cout << " Enter the number of pounds of peanuts grown: ";
	cin >> Peanutsgrown;
	cout << " Enter the number of pounds sold: ";
	cin >> Peanutssold;

	//Calculate the cost associated with growing each crop along with gross and net profit
	const double Totalcostcorn = Corngrown * CORN_COSTTOPRODUCE;
	const double Totalcostpeanuts = Peanutsgrown * PEANUTS_COSTTOPRODUCE;
	const double Grossprofitcorn = Cornsold * CORN_PRICE;
	const double Grossprofitpeanuts = Peanutssold * PEANUTS_PRICE;
	const double Netprofitcorn = Grossprofitcorn - Totalcostcorn;
	const double Netprofitpeanuts = Grossprofitpeanuts - Totalcostpeanuts;
	const double Netcompanyprofit = Netprofitcorn + Netprofitpeanuts;

	//Display the company report
	cout << "Congratulations here are the results" << endl;
	cout << "Total Cost to Produce Corn: $ " << Totalcostcorn << endl;
	cout << "Total Cost to Produce Peanuts: $ " << Totalcostpeanuts << endl;
	cout << "Total Gross Sales from Corn: $ " << Grossprofitcorn << endl;
	cout << "Total Gross Sales from Peanuts: $ " << Grossprofitpeanuts << endl;
	cout << "Net Profit from Corn: $ " << Netprofitcorn << endl;
	cout << "Net Profit from Penuts: $ " << Netprofitpeanuts << endl;
	cout << "Total Profit for the Company: $ " << Netcompanyprofit << endl;
	system("pause");
	return 0;
}