// Ex 5 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   long long population;
   long long usPopulation;
   cout << "World's population: ";
   cin >> population;
   cout << "Population of the USA: ";
   cin >> usPopulation;
   cout << double (usPopulation ) / population * 100 << endl;
}

