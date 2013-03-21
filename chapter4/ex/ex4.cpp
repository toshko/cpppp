#include <string>
#include <iostream>
using namespace std;

int main()
{
   string fname, lname, name;

   cout << "Enter your first name: ";
   getline(cin, fname);
   cout << "Enter your last name: ";
   getline(cin, lname);
   name = lname + ", " + fname;
   cout << name << endl;
}
