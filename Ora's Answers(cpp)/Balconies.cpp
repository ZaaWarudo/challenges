#include <iostream>
int main()
{
	int l1, w1, a1;
	int l2, w2, a2;
	std::cout << "Enter dimensions of first balc: ";
	std::cin >> l1;
	getchar();
	std::cin >> w1;
	a1 = l1 * w1;
	std::cout << "Enter dimensions of second balc: ";
	std::cin >> l2;
	getchar();
	std::cin >> w2;
	a2 = l2 * w2;
	if (a1 > a2)
	{
		std::cout << "1st balc is larger by "<<a1-a2;
	}
	else
	{
		std::cout << "2nd balc is larger by "<<a2-a1;
	}
	return 0;
}