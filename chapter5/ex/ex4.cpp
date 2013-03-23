#include <iostream>
using namespace std;

int main()
{
   double balanceCleo = 100;
   double balanceDaphne = 100;
   float originalDaphne = 100;
   float interestCleo = 0.05;
   float interestDaphne = 0.1;
   int counter = 0;
   while ( balanceCleo <= balanceDaphne )
   {
      counter++;
      balanceCleo += balanceCleo * interestCleo;
      balanceDaphne += originalDaphne * interestDaphne;
   }
   cout << "After " << counter << " years Cleo will have more money" << endl;
   cout << "Cleo's balance: " << balanceCleo << endl;
   cout << "Daphe's balance: " << balanceDaphne << endl;
}
