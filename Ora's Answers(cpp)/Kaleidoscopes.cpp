#include <iostream>
#define log(x) std::cout<<x
#define logl(x) std::cout<<x<<std::endl
int main()
{
	int num_k;
	int price=5;
	log("Enter no. of ks to buy: ");
	std::cin >> num_k;
	if (num_k == 1)
	{
		log("The total is: ");
		logl(price);
	}
	else
	{

		log("The price is: ");
		log((price * num_k * 0.9) * 1.07);
	}
return 0;
}