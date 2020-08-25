#include <iostream>
int main()
{
	int l, b,Ar;
	std::cout << "Enter length: ";
	std::cin >> l;
	std::cout << "Enter breadth: ";
	std::cin >> b;
	Ar = l * b;
	std::cout << "The area is: " << Ar;
	std::cout << "The total no. of flamingoes requires is: " << Ar / 2;
	return 0;
}