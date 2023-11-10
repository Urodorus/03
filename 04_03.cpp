#include <iostream>

int main()
{
	long double a,k,b;
	int t=0;
	std::cin >> a >> b;
	k = a;
	while (b >= k)
	{
		k *= a;
		t++;
	}
	std::cout << t;
	return 0;
}