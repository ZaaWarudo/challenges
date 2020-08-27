#include <iostream>
#include <string>
#include <sstream>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
#define login(x) std::cin>>x
#define logstr(x) std::getline(std::cin,x)
int main()
{
	int num_crime;
	log("Reported crimes: ");
	login(num_crime);
	if (num_crime < 5)
	{
		log("I can let Bats rest.");
	}
	else if (num_crime >= 5 && num_crime <= 10)
	{
		log("Gordon! Turn on the Bat signal.");
	}
	else
	{
		log("The Dark Knight is not who we deserve, but who we need.");
	}
	return 0;
}
