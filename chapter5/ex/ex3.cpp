#include <iostream>
using namespace std;

int main()
{
   double sum;
   double x = 1.0;
   cout << "Enter numbers and terminate with 0" << endl;
   while( x != 0)
   {
      cin >> x;
      sum += x;
      cout << "Sum: " << sum << endl; 
   }


}
