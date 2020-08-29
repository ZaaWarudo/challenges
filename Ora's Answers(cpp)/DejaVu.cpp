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
	std::string inp;
	std::stringstream ss;
	log("Type: ");
	std::getline(std::cin, inp);
	int len = inp.length();
	int count = 1;
	for (int i = 0;i <= (len - 2);i++)
	{
		for (int j = (i + 1);j <= (len - 1);j++)
		{
			if (inp[i] == inp[j])
			{
				count++;
				if (count > 1)
				{
					inp[j] = ' ';
				}
			}
		}
		if (count > 1 && inp[i] != ' ')
		{
			logs(inp[i]);
			log("was repeated ");
			logs(count);
			logl("times");
			log("No. They were not all unique.");
		}
		else
		{
				log("They were all unique.");
	    }
		count = 1;
		
	}
	return 0;
}



