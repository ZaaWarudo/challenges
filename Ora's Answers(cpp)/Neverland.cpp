#include <iostream>
#define log(x) std::cout<<x
#define logl(x) std::cout<<x<<std::endl
int main()
{
	int age,elapsed;
	int yy, mm, dd;
	log("Enter your current age: ");
	std::cin >> age;
	log("Enter time elapsed since he left(dd/mm/yy): ");
	std::cin >> dd;
	getchar();
	std::cin >> mm;
	getchar();
	std::cin >> yy;
	log("It has been ");
	log(yy);
	log(" years ");
	log(mm);
	log(" months ");
	log(dd);
	logl(" days.");
	log("You are now ");
	if (yy == 0 && mm == 0)
	{
		log(dd);
		log(" days older.");
	}
	else if (dd == 0 && mm == 0)
	{
		log(yy);
		logl(" years older.");
		log("You are now ");
		log(age + yy);
		log(" years old.");
	}
	else if (yy == 0 && dd == 0)
	{
		log(mm);
		log(" months older.");
	}
	else if (yy == 0)
	{
		log(mm);
		log(" months and ");
		log(dd);
		log(" days older.");
	}
	else if (mm == 0)
	{
		log(yy);
		log(" years and ");
		log(dd);
		logl(" days older.");
		log("You are now ");
		log(age + yy);
		log(" years old.");
	}
	else if (dd == 0)
	{
		log(yy);
		log(" years and ");
		log(mm);
		logl(" months older.");
		log("You are now ");
		log(age + yy);
		log(" years old.");
	}
	else
	{
		log(yy);
		log(" years and ");
		log(mm);
		log(" months and ");
		log(dd);
		logl(" days older.");
		log("You are now ");
		log(age + yy);
		log(" years old.");
	}
	

return 0;
}