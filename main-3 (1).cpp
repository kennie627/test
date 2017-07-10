//This program will calculate loss and gains from stock trades
//Written By <Davis Booth><06/11/2017>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Declared Variables
	string nameofstock;
	int numberofshares;
	double stockpurchaseprice; 
	int numberofsharessold;
	double sellingprice;

	//Greeting and User Input
	cout << "**Welcome to the Stock Trader's Calculator**" << endl;
	cout << endl;
	cout << "Name of Stock Purchased? " << endl;
	getline(cin, nameofstock);
	cout << endl;
	cout << "Number of Shares Purchased? " << endl;
	cin >> numberofshares;
	cout << endl;
	cout << "Purchase Price? " << endl; 
	cout << "$";
	cin >> stockpurchaseprice;
	cout << endl;

	//Calculations
	double totalpurchaseprice = numberofshares * stockpurchaseprice;
	double stockbrokerbuycommission = .02 * totalpurchaseprice;
	
	//Request User Input
	cout << "Number of Shares Sold? " << endl;
	cin >> numberofsharessold;
	cout << endl;
	cout << "Selling Price? " << endl;
	cout << "$";
	cin >> sellingprice;

	//Calculations
	double totalsellprice = numberofsharessold * sellingprice;
	double stockbrokersellcommission = .02 * totalsellprice;
	double totalstockpurchaseamount = totalpurchaseprice + stockbrokerbuycommission;
	double totalstocksellprice = totalsellprice - stockbrokersellcommission;
	double totalnetprice = totalstocksellprice - totalstockpurchaseamount;

	//Display Report
	cout << endl;
	cout << endl;
	cout << "--------------Financial Report--------------" << endl;
	cout << endl;
	cout << left << setw(37) << "Name of Stock: " << nameofstock << "\n";
	cout << endl;
	cout << left << setw(37) << "Total Stock Purchase Amount: " << setprecision(2) << fixed << "$" << totalpurchaseprice << "\n";
	cout << left << setw(37) << "Stock Broker's Purchase Commission: " << setprecision(2) << fixed << "$" << stockbrokerbuycommission << "\n";
	cout << left << setw(37) << "Total Stock Sell Price: " << setprecision(2) << fixed << "$" << totalsellprice << "\n";
	cout << left << setw(37) << "Stock Broker's Seller Commission: " << setprecision(2) << fixed << "$" << stockbrokersellcommission << "\n";
	cout << endl;
	cout << left << setw(37) << "Total Profit / Loss: " << setprecision(2) << fixed << "$" << totalnetprice << "\n";
	cout << endl;
    
	system("pause");

	return 0;
}