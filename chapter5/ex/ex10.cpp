#include <iostream>
using namespace std;

int main()
{
   int rows, i, z, h;
   cout << "Enter number of rows: ";
   cin >> rows;
   for ( i = 0; i < rows; ++i)
   {
      for ( z = 0; z < rows - 1 - i; z++ )
	 cout << ".";
      for ( h = 0; h < i + 1; h++)
	 cout << "*";
      cout << endl;
   }
}
