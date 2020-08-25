#include <iostream>
int main()
{
	int tot, num1, num2;
	std::cout << "Enter total no. of EEs: ";
	std::cin >> tot;
	std::cout << "Enter no. of EEs held by you: ";
	std::cin >> num1;
	std::cout << "Enter no. of EEs held by frnd: ";
	std::cin >> num2;
	int ee_left = tot - (num1 + num2);
	switch (ee_left)
	{
	case 0:
		std::cout << "eat it boi.";
		break;
	default:
		std::cout << "Not yet, u lil shit.";
	}
	return 0;
}