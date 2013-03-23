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
   int sales[12][3];
   int sum = 0;
   int i;
   int year;
   int total = 0;
   for ( year = 0; year < 3; ++year )
   {
      cout << "Enter the sales for year - " << year + 1 << endl;
      for ( i = 0; i < 12; ++i )
      {
	 cout << Months[i] << ":";

	 cin >> sales[i][year];
      }
   }

   for ( year = 0; year < 3; ++year )
   {
      for ( i = 0; i < 12; ++i )
      {
	 sum += sales[i][year];
      }
      cout << "Total sales for year - " << year + 1 << ": " << sum << endl;
      total += sum;
      sum = 0;
   }
   cout << "Total sales: " << total << endl;


}
