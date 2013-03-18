// Ex 4 Chapter 3
#include <iostream>
using namespace std;

int main()
{
   const int HOURS_DAY = 24;
   const int MINUTES_HOUR = 60;
   const int SECONDS_MIN = 60;
   int input, days, hours, minutes, seconds;

   cout << "Seconds: ";
   cin >> input;
   seconds = input % SECONDS_MIN;
   minutes = input / SECONDS_MIN;
   hours = minutes / MINUTES_HOUR;
   minutes = minutes - hours * MINUTES_HOUR;
   days = hours / HOURS_DAY;
   hours = hours - days * HOURS_DAY;
   cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds."
      << endl;
   
}

