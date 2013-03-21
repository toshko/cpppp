#include <iostream>
#include <array>

using namespace std;

int main()
{
   array <double, 3>dashTimes;
   cout << "Enter three times for the 40-yd dash" << endl;
   cout << "1: ";
   cin >> dashTimes[0];
   cout << "2: ";
   cin >> dashTimes[1];
   cout << "3: ";
   cin >> dashTimes[2];
   cout << "Average: " << (dashTimes[0] + dashTimes[1] + dashTimes[2])/3 << endl;
}
