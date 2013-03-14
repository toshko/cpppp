// Exercise 6 Chapter 2
#include <iostream>
double astrUnits(double x);

int main()
{
	using namespace std;
	double lyears;
	cout << "Enter the number of light years: ";
	cin >> lyears;
	cout << lyears << " light years = " << astrUnits(lyears) << " astronomical units." << endl;
}

double astrUnits(double x)
{
	return x * 63240.0;
}
