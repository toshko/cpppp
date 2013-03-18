// hecoct2.cpp -- shows hex and ocalt literals
#include <iostream>
using namespace std;

int main()
{
   int chest = 42;
   int waist = 42;
   int inseam = 42;

   cout << "Monsier cuts a striking figure!\n";
   cout << "chest = " << chest << " (42 in decimal)\n";
   cout << hex;
   cout << "waist = " << waist << " (hexademical for 42)\n";
   cout << oct;
   cout << "inseam = " << inseam << " (octal for 42)\n";
   return 0;
}

