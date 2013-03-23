#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   char word[50];
   int counter = 0;
   cout << "Enter words (to stop, type the word done): " << endl;
   while ( strcmp(word, "done") )
   {
      counter++;
      cin >> word;
   }
   cout << "You entered a total of " << --counter << " words." << endl; // the word "done" is also counted
   
}
