// test some features from the chapter
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
   ifstream input;
   input.open("a.in");

   char ch;
   int words = 0;
   int lines = 0;
   int chars = 0;
   while ((ch = input.get()) != EOF)
   {
      if ( ch == ' ' || ch == '\t')
	 words++;
      else if ( ch == '\n' )
      {	 
	cout << ch; 
	 lines++;
	 words++;
      }
      else 
	 chars++;
   }

   cout << words << " " << lines << " " << chars << endl;
#if 0
   WHILE wait = 0;
   cout << "haha" << endl;
   while ( wait > 50000000000) {
      wait++;
   }
   cout << "haha" << endl;
#endif
}
