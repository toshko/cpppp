#include <iostream>
using namespace std;

int main()
{
   int x, y, sum;
   cout << "Enter two integers!" << endl;
   cout << "1: ";
   cin >> x;
   cout << "2: ";
   cin >> y;
   for ( x; x <= y; x++ )
   {
      sum += x;
   }
   cout << "Average: " <<(double) sum /(double) y << endl;
}
