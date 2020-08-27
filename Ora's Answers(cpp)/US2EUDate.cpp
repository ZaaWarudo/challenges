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
	int day, mnt, yr;
	log("Enter date: ");
	
	login(mnt);
	std::getchar();
	login(day);
	std::getchar();
	login(yr);
	log("EU time is: ");
	log(day);
	log('/');
	log(mnt);
	log('/');
	log(yr);
	return 0;
}
