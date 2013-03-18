// Ex 7 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   const double KM100_MILES = 62.14;
   const double GALLON_LITRES = 3.875;

   cout << "Enter fuel consumption per 100km: ";

   double consumption;
   cin >> consumption;
   consumption /= GALLON_LITRES;
   cout << "MPG: " << KM100_MILES / consumption << endl;
}

