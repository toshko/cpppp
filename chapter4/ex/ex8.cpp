#include <iostream>
#include <string>
using namespace std;

struct pizza
{
   string company;
   int diameter;
   int weight;
};

int main()
{
   pizza *corleone = new pizza;

   cout << "Enter the pizza brand: ";
   getline(cin, corleone->company);
   cout << "Enter the diameter of the pizza: ";
   cin >> corleone->diameter;
   cout << "Enter the weight of the pizza in grams: " ;
   cin >> corleone->weight;

   cout << "Company: " << corleone->company << endl;
   cout << "Diameter: " << corleone->diameter << endl;
   cout << "Weight: " << corleone->weight << endl;
}
