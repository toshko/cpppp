// Ex 3 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   const double TO_DECIMAL = 60; // minutes and seconds to decimal
   int degrees, minutes, seconds;
   cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
   cout << "First, enter the degrees: ";
   cin >> degrees;
   cout << "Minutes: ";
   cin >> minutes;
   cout << "Seconds: ";
   cin >> seconds;
   cout << degrees + minutes / TO_DECIMAL + (seconds / TO_DECIMAL) / TO_DECIMAL << endl;
}

