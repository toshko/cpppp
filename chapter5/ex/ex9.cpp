#include <iostream>
#include <string>

using namespace std;

int main()
{
   string word;
   int counter = 0;
   cout << "Enter words (to stop, type the word done): " << endl;
   while ( word != "done" )
   {
      counter++;
      cin >> word;
   }
   cout << "You entered a total of " << --counter << " words." << endl; // the word "done" is also counted
   
}
