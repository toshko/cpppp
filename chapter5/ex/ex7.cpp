#include <iostream>
using namespace std;
struct car
{
   char make[20];
   int builtYear;
};
int main()
{
  int i, z ;
  cout << "How many cars do you wish to catalog? ";
  cin  >> z;
  cin.get();
  car *catalog = new car[i];

  for ( i = 0; i < z; ++i )
  {
     cout << "Car #" << i + 1 << endl;
     cout << "Please enter the make: ";
     cin.getline(catalog[i].make, 20);
     cout << "Please enter the year made: ";
     (cin >> catalog[i].builtYear).get();

  }
  for ( i = 0; i < z; ++i )
  {
     cout << catalog[i].builtYear << " " << catalog[i].make << endl;
  }
  

  
}
