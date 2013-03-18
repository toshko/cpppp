// Exercise 1 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   const int FEET = 12;
   int height_inches;
   cout << "Your height in inches: " ;
   cin >> height_inches;
   cout << "Your height in feet and inches: ";
   cout << height_inches / FEET << " Feet and ";
   cout << height_inches % FEET << " inches!" << endl;
   
   
}

