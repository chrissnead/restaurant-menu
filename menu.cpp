//---------------------------------------------------------------
// Purpose: Allow users to select an item from one of three menus
// Author: Christopher Snead
//---------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

   //Equation variables
   float item_price = 0;
   int item_quantity = 0;

   // Print message asking user to select from menu
   cout << "Which menu would you like to order from?\n";
   cout << "    B = Breakfast\n";
   cout << "    L = Lunch\n";
   cout << "    D = Dinner\n";
   cout << "Your choice: ";

   // Read input
   string user_choice = "";
   cin >> user_choice;
   cout << user_choice << endl;

   // Print message asking user to chose an item
   if (user_choice == "B")
   {
      cout << "You chose breakfast\n";
      cout << "Which item would you like to order?\n";
      cout << "    E = Eggs Benedict - $4.99\n";
      cout << "    O = Omelette - $3.99\n";
      cout << "    C = Crepe - $3.99\n";
      cout << "    F = French Toast - $4.99\n";
      cout << "    W = Waffles - $4.99\n";
      cout << "Your choice: ";
      cin >> user_choice;

      if (user_choice == "E")
      {
         cout << "You chose Eggs Benedict\n";
         item_price = 4.99;
      }
      else if (user_choice == "O")
      {
         cout << "You chose Omelette\n";
	 item_price = 3.99;
      }
      else if (user_choice == "C")
      {
         cout << "You chose Crepe\n";
         item_price = 3.99;
      }
      else if (user_choice == "F")
      {
         cout << "You chose French Toast\n";
         item_price = 4.99;
      }
      else if (user_choice == "W")
      {
         cout << "You chose Waffles\n";
         item_price = 4.99;
      }
   }
   if (user_choice == "L")
   {
      cout << "You chose lunch\n";
      cout << "Which item would you like to order?\n";
      cout << "    C = Chili - $4.99\n";
      cout << "    T = Thai Salad - $5.99\n";
      cout << "    B = Burger - $5.99\n";
      cout << "    V = Veggie Tacos - $3.99\n";
      cout << "    G = Grilled Cheese - $2.99\n";
      cout << "Your choice: ";
      cin >> user_choice;

      if (user_choice == "C")
      {
         cout << "You chose Chili\n";
	 item_price = 4.99;
      }
      else if (user_choice == "T")
      {
         cout << "You chose Thai Salad\n";
	 item_price = 5.99;
      }
      else if (user_choice == "B")
      {
         cout << "You chose Burger\n";
	 item_price = 5.99;
      }
      else if (user_choice == "V")
      {
         cout << "You chose Veggie Tacos\n";
         item_price = 3.99;
      }
      else if (user_choice == "G")
      {
         cout << "You chose Grilled Cheese\n";
	 item_price = 2.99;
      }
   }
   if (user_choice == "D")
   {
      cout << "You chose dinner\n";
      cout << "Which item would you like to order?\n";
      cout << "    C = Caesar Salad - $4.99\n";
      cout << "    V = Veggie Sandwich - $7.99\n";
      cout << "    T = Thai Curry - $8.99\n";
      cout << "    E = Eggplant Parmesan - $8.99\n";
      cout << "    S = Spaghetti - $7.99\n";
      cout << "Your choice: ";
      cin >> user_choice;
      if (user_choice == "C")
      {
         cout << "You chose Caesar Salad\n";
         item_price = 4.99;
      }
      else if (user_choice == "V")
      {
         cout << "You chose Veggie Sandwich\n";
	 item_price = 7.99;
      }
      else if (user_choice == "T")
      {
         cout << "You chose Thai Curry\n";
	 item_price = 8.99;
      }
      else if (user_choice == "E")
      {
         cout << "You chose Eggplant Parmesan\n";
	 item_price = 8.99;
      }
      else if (user_choice == "S")
      {
         cout << "You chose Spaghetti\n";
	 item_price = 7.99;
      }
   }

   //Ask user how many orders of item they want
   cout << "How many orders of this item would you like to place?\n";
   cout << "Quantity: ";
   cin >> item_quantity;

   //Calculate order total
   float total_cost = 0;
   total_cost = item_price * item_quantity * 1.05;
   cout << "Your order total is "<< fixed << setprecision(2)
	<< "$" << total_cost << endl;

   //Ask user if they would like to submit order
   cout <<"Do you wish to order this food now? (yes/no)\n";
   cout << "Your choice: ";
   cin >> user_choice;
   if (user_choice == "yes")
   {
      cout << "Thank you for placing your order!\n";
   }
   else if (user_choice == "no")
   {
      cout << "Sorry we couldn't help you!\n";
   }
   else
   {
   cout << "Sorry, you did not type yes/no\n";
   }

   return 0;
}
