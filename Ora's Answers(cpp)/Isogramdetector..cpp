#include <iostream>
#include <string>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
int main()
{
	std::string word;
	log("Enter word : ");
	std::cin >> word;
	int len, count = 1;
	len = word.length();
	bool iso;
	for (int i = 0;i <= (len - 1);i++)
	{
		for (int j = (i + 1);j <= len;j++)
		{
			if (word[i] == word[j])
			{
				count++;
			}		
		}
		if (count > 1)
		{
			iso = false;
			break;
		}
		else
		{
			iso = true;
		}
	}
	if (iso)
	{
		log("true");
	}
	else
	{
		log("false");
	}

	return 0;
}
