#include <iostream>
int num_tape(int& l, int& w, int& h)
{
	int tot_ar = (2 * (l * w)) + (2 * (w * h)) + (2 * (l * h));
	int duct_ar = 1440;
	int num = tot_ar / duct_ar;
	return num;
}
int main()
{
	int x, y, z;
	std::cout<< "enter dimension of dooe(l*w*h): ";
	std::cin >> x;
	getchar();
	std::cin >> y;
	getchar();
	std::cin >> z;
	std::cout << "No. of duct tapes needed: " << num_tape(x, y, z);
	return 0;
}