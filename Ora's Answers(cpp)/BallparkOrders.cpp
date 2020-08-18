#include <iostream>

int main()
{
	std::string orders = "", order = "";
	int order_num = 1;
	double tot = 0.00;
    while (std::cin>> order && order_num<=4)
	{
		if ( order == "Nachos" || order == "Pizza")
		{
			tot += 6.00;
			orders += order;
		}
		else if (order == "Water")
		{
			tot += 4.00;
			orders += order;
		}
		else if (order == "Cheeseburger")
		{
			tot += 10.00;
			orders += order;
		}
		else if (order == "Coke")
		{
			tot += 5.00;
			orders += order;
		}
		else
		{
			tot += 0.00;
			orders += "N/A";
		}
		order_num++;
		orders += " ";
	}
	tot += tot *0.07;
	std::cout << "Your total was: " << tot<<std::endl;
	std::cout <<"" orders << std::endl;
	return 0;
}