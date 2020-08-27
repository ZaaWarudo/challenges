#include <iostream>
#include <string>
#define log(x) std::cout<<x
#define logs(x) std::cout<<x<<" "
#define logl(x) std::cout<<x<<std::endl
int main()
{
	log("Enter sentence: ");
	std::string sent, vow;
	std::getline(std::cin, sent);
	int len, vlen;
	len = sent.length();
	for (int i = 0;i <= (len - 1);i++)
	{
		if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u')
		{
			vow += sent[i];
			vow += ", ";
		}
	}
	vlen = vow.length();
	vow[vlen-1] = '.';
	vow[vlen - 2] = ' ';
	
    log("The vowels involved are: ");
	log(vow);
	return 0;
}