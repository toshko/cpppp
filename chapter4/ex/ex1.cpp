#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char fName[50];
   char lName[50];
   char grade;
   int age;
   
   cout << "What is your first name? ";
   cin.getline(fName, 50);
   cout << "What is your last name? ";
   cin.getline(lName, 50);
   cout << "What letter grade do you deserve? ";
   cin >> grade;
   cout << "What is your age ";
   cin >> age;
   cout << "Name: " << lName << ", " << fName << endl;
   cout << "Grade: " << ++grade << endl;
   cout << "Age: " << age << endl;
}

