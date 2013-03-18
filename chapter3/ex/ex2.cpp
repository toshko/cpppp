// Ex.2 Chapter 3 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   const int TO_INCHES = 12; // 1 foot 12 inches
   const double TO_METERS = 0.0254; // 1 inch is 0.0254 meters
   const double TO_KILOGRAMS = 2.2; // 1 kilogram is 2.2 pounds
   double height_feet;
   double height_inches;
   double weight;
   double height_meters;

   cout << "Enter your height in feet and inches" << endl;
   cout << "Feet: ";
   cin >> height_feet;
   cout << "Inches: ";
   cin >> height_inches;
   cout << "Enter your weight in pounds: ";
   cin >> weight;
   height_inches += height_feet * TO_INCHES;
   weight /= TO_KILOGRAMS;
   height_meters = height_inches * TO_METERS;
   cout << "BMI: " << weight / pow( height_meters, 2.0) << endl;
}
