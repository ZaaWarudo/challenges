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
	std::string time,M;
	int hr;
	int min;
	log("Enter the time: ");
	logstr(time);
	std::stringstream ss;
	ss << time;
	std::string time_;
	
	for (int i=1;i <= 4;i++)
	{
		ss >> time_;
		switch (i)
		{
		case 1:
			std::stringstream(time_) >> hr;
			break;
		case 3:
			std::stringstream(time_) >> min;
			break;
		case 4:
			std::stringstream(time_) >> M;
			break;
		}
	}
	if (M == "PM")
	{
		hr += 12;
	}
	log("The military time is: ");
	log(hr);
	log(':');
	log(min);
	return 0;
}
