// Exercise 3 Chapter 2
#include <iostream>
void mice();
void run();

int main()
{
	using namespace std;
	mice();
	mice();
	run();
	run();
}


void mice()
{
	std::cout << "Three blind mice" << std::endl;
}

void run()
{
	std::cout << "See how they run" << std::endl;
}
