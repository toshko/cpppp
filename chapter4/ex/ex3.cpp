#include <cstring>
#include <iostream>
using namespace std;

int main()
{
   char fname[50];
   char lname[50];
   char name[100];
   cout << "Enter your first name: ";
   cin.getline(fname, 50);
   cout << "Enter your last name: ";
   cin.getline(lname, 50);
   strcpy(name, lname);
   strcat(name, ", ");
   strcat(name, fname);
   cout << name << endl;
}
