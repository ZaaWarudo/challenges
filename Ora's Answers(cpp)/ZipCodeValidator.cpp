#include <iostream>
#include <sstream>
#include <string>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
bool valid(std::string& zref)
{
	// { ,, };|| || zref == ""
	if (zref == "ndk3l")
	{
		return true;
    }
	else if (zref == "lldj4")
	{
		return true;
	}
	else if (zref == "ammv6")
	{
		return true;
	}
	else if (zref == "nhuj4")
	{
		return true;
	}
	else if (zref == "lji88")
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	std::string zip;
	log("Enter ya fkin zip: ");
	std::cin >> zip;
	if (valid(zip))
	{
		log("tis ok");
	}
	else
	{
		log("ya dun fkd up boi");
	}
	return 0;

}