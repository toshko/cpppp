#include <iostream>
using namespace std;

int main()
{
   const char * Months[12] = 
   {
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "Octomber",
      "November",
      "December"
   };
   int sales[12];
   int sum = 0;
   int i;

   for ( i = 0; i < 12; ++i )
   {
      cout << "Enter sales for " << Months[i] << ":";
      cin >> sales[i];
   }

   for ( i = 0; i < 12; ++i )
   {
      sum += sales[i];
   }
   cout << "Total sales: " << sum << endl;


}
