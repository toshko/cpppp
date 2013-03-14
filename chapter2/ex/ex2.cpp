// Exercise 2 Chapter 2
#include <iostream>
int yards(int n);

int main()
{
	using namespace std;
	int furlongs;
	cout << "Enter a distance in furlongs: "; 
	cin >> furlongs;
	cout << furlongs << " furlongs = ";
	cout << yards(furlongs) << " yards" << endl;
}

int yards(int n)
{
	return 220 * n;
}
