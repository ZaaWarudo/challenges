#include <iostream>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
#define login(x) std::cin>>x
int main()
{
	int x;
	int tot = 0;
	log("Enter no.: ");
	login(x);
	for (int i = 1;i < x;i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			tot += i;
		}
	}
	log(tot);
	return 0;
}
