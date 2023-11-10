#include <iostream>
#include <string>
int main()
{
	std::string str;
	getline(std::cin,str);
	int len = str.length();
	for (int i=0;i<len;i++)
	{
		if ((str[i] >= 'a') and (str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i] >= 'A') and (str[i] <= 'Z'))
			str[i] += 32;
		std::cout << str[i];
	}
	return 0;
}