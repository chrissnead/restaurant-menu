// Purpose: Use iteration and condition statements to create ASCII art
// Author: Christopher Snead

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   // Ask user to enter size of pattern
   int size = 0;
   cout << "Enter a size for the pattern:\n";
   cin >> size;

   //Ask user to enter character to use for pattern
	 char pattern = '*';
	 cout << "Enter a character for the pattern:\n";
	 cin >> pattern;

	 //Loop patterns using the size and character entered
	 int row = 0;
	 cout << "Solid Square Pattern\n";
	 while (row < size)
	 {
      int column = 0;
		  while (column < size)
		  {
		     cout << pattern << " ";
		     column = column + 1;
		  }
      cout << endl;
	    row = row + 1;
	 }
	 row = 0;
	 cout << "Solid Triangle Pattern\n";
	 while (row < size)
   {
      int column = 0;
      while (column < size)
      {
		     if (row >= column)
		     {
            cout << pattern << " ";
		     }
		     else
		     {
		     cout << " ";
		     }
         column = column + 1;
      }
      cout << endl;
      row = row + 1;
   }
	 row = 0;
	 cout << "Vertical Stripe Pattern\n";
   while (row < size)
   {
      int column = 0;
      while (column < size)
      {
         if (column == 0||column == size/2||column == size-1)
         {
            cout << pattern << " ";
         }
         else
         {
            cout << "  ";
         }
         column = column + 1;
      }
      cout << endl;
      row = row + 1;
   }
	 row = 0;
   cout << "Square Outline Pattern\n";
   while (row < size)
   {
      int column = 0;
      while (column < size)
      {
         if (column == 0||column == size-1||row == 0||row == size-1)
         {
            cout << pattern << " ";
         }
         else
         {
            cout << "  ";
         }
         column = column + 1;
      }
      cout << endl;
      row = row + 1;
   }
	 row = 0;
   cout << "Letter X Pattern\n";
   while (row < size)
   {
      int column = 0;
      while (column < size)
      {
         if (row == column||row == size-1-column)
         {
            cout << pattern << " ";
         }
         else
         {
            cout << "  ";
         }
         column = column + 1;
      }
      cout << endl;
      row = row + 1;
   }
	 return 0;
}
