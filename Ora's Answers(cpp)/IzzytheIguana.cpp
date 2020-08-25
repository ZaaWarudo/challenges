#include <iostream>
#define log(x) std::cout<<x
#define logl(x) std::cout<<x<<std::endl
int conv(std::string& item)
{
	
	if (item == "lettuce")
	{
		return 5;
	}
	else if (item == "carrot")
	{
		return 4;
	}
	else if (item == "mango")
	{
		return 9;
	}
	else if (item == "cheeseburger")
	{
		return 0;
	}
}
void conc(int& tot)
{
	if (tot >= 10)
	{
		log("Come on down.");
	}
	else
	{
		log("Time to wait");
	}
}
int main()
{
	std::string food;
	int total = 0;
	log("Enter the items with a space in between each item: ");
	while (std::cin >> food)
	{
		total += conv(food);
	}
	logl(total);

	conc(total);
	return 0;

}