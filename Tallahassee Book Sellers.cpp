// This program helps customers determine the number of Book Bucks earned in a month.
// Written by <Davis Booth><06/18/2017>

#include <iostream>

using namespace std;

int main()
{
   // Constants for Book Bucks.
	const int 0_PURCHASED_BOOKS = 0;
	const int 1_PURCHASED_BOOKS = 5;
	const int 2_PURCHASED_BOOKS = 15;
	const int 3_PURCHASED_BOOKS = 25;
	const int 4_PURCHASED_BOOKS = 35;
	const int 5_PURCHASED_BOOKS = 70;
	         
	        

   int numberofbookspurchased;  // To hold a number of books purchased.
   long int BooksellersID; // ID of user.

   // Get the number of books purchsed.
   cout << "Please enter your Bookseller's ID\n";
   cin >> BooksellersID;
   cout << "Enter the number of books purchased: ";
   cin >> numberofbookspurchased;
   
   // Determine the Book Bucks.
   if (numberofbookspurchased >= 5)
	  cout <<5_PURCHASED_BOOKS;
   else if (numberofbookspurchased >= 4)
      cout <<4_PURCHASED_BOOKS; 
   else if (numberofbookspurchased >= 3)
      cout <<3_PURCHASED_BOOKS;
   else if (numberofbookspurchased >= 2)
      cout <<2_PURCHASED_BOOKS;
   else if (numberofbookspurchased >= 1)
      cout <<1_PURCHASED_BOOKS;
   else if (numberofbookspurchased = 0)
	  cout <<0_PURCHASED_BOOKS;
   else
      cout << "Number of Books\n";

   return 0;
} 