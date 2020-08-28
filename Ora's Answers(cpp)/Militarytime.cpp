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
	std::string time, M;
	int hr;
	int min = 0;;
	int len;
	int i = 1;
	log("Enter the time: ");
	logstr(time);
	len = time.length();
	time[len - 3] = ':';
	std::stringstream ss(time);
	std::stringstream sss;
	std::string time_,time__;
	while (std::getline(ss, time_, ':'))
	{
		switch (i)
		{
		case 1:
			std::stringstream(time_) >> hr;
			break;
		case 2:
			std::stringstream(time_) >> min;
			break;
		case 3:
			std::stringstream(time_) >> M;
			break;
		}
		i++;
		time_ = "";
	}
	if (M == "PM")
		{
			hr += 12;
		}
		log("The military time is: ");
		log(hr);
		log(":");
		log(min);
	
	return 0;
}
