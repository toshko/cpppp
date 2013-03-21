#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
   string brand;
   double weight;
   int calories;
};

int main()
{
   CandyBar * box = new CandyBar[3]; 
   box->brand = "Bulgarian";
   box->weight = 32.3;
   box->calories = 12;
   box[1].brand = "Balkans";
   box[1].weight = 33.33;
   box[1].calories = 222;
   (*(box + 2)).brand = "Dupe";
   (*(box + 2)).weight = 323.23;
   (*(box + 2)).weight = 333;
   for (int i = 0; i < 3; ++i )
   {
      cout << "Brand: " << box[i].brand << endl;
      cout << "Weight: " << box[i].weight << endl;
      cout << "Calories: " << box[i].calories << endl;
   }
   delete [] box;
}
