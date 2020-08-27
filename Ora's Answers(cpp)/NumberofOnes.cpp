#include <iostream>
#include <string>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
#define login(x) std::cin>>x
int main()
{
	int num;
	int num_d;
	std::string bin;
	log("Enter number: ");
	login(num);
	int count = 0;
	while (num > 0)
	{
		num_d = num % 2;
		log(num_d);
		if (num_d == 1)
		{
			count++;
			num - 1;
		}
		num /= 2;
		
	}
	logl("");
	log("1 was repeated ");
	logs(count);
	log("times.");
	return 0;
}
