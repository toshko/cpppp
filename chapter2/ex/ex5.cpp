// Exercise 5 Chapter 2
#include <iostream>
double fahr(int c);

int main()
{
	using namespace std;
	double celsius;
	cout << "Please enter a Celsius value: " ;
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << fahr(celsius) << " degrees Fahrenheit." << endl;
}

double fahr(double c)
{
	return 1.8 * c + 32.0;
}
