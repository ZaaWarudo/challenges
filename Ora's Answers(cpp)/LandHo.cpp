#include <iostream>
#define log(x) std::cout<<x
#define logl(x) std::cout<<x<<std::endl
int main()
{
	int num_p;
	log("Enter no. of passenger ahead of you: ");
	std::cin >> num_p;
	if (num_p < 20)
	{
		log("10 mins remaing.");
	}
	else
	{
		log(((num_p / 20) * 20) + 10);
		log(" mins remaing.");
	}
return 0;
}