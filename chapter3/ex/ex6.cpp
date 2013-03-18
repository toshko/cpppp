// Ex 6 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   double kilometers, litres;

   cout << "Kilometers: ";
   cin >> kilometers;
   cout << "Litres: ";
   cin >> litres;

   cout << "Consumption: ";
   cout << (litres * 100) / kilometers << " litres per 100 km" << endl;
}

