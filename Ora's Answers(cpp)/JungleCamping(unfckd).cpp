#include <iostream>
std::string conv(std::string& ref_s)
{
	std::string anim="";
	if (ref_s == "rawr")
	{
		anim += "Tiger";
	}
	else if(ref_s == "grr")
	{
		anim += "Lion";
	}
	else if (ref_s == "ssss")
	{
		anim += "Snake";
	}
	else if(ref_s == "chirp")
	{
		anim == "bird";
	}
	anim += " ";
	return anim;
}
int main()
{
	std::string sounds;
	std::cout << "Enter Sounds: ";
	while (std::cin >> sounds)
	{
		std::cout << conv(sounds);
	}
	return 0;
}