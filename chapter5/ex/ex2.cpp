#include <iostream>
using namespace std;

long double factorial[101];

int main()
{
   int i, z;
   factorial[0] = 1.0L;
   factorial[1] = 1.0L;
   cout.precision(30);
   for ( i = 2; i <=100; i++)
   {
      factorial[i] = factorial[i-1] * i;
   }

   for ( z = 0; z < 101; z++)
   {
      cout << z <<  "!" << " = " << factorial[z] << endl;
   }
}
