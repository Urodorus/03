#include <iostream>
struct one
{
	std::string name;
	int m;
}a, ans;
int main()
{
	int n, g1, g2, m, sum = 0;
	std::string str;
	char ch;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		a.m = 0;
		std::cin >> a.name >> g1 >> g2 >> ch;
		if ((ch == 'Y') and (g2 > 80)) a.m += 850;
		std::cin >> ch;
		if ((ch == 'Y') and (g1 > 85)) a.m += 1000;
		std::cin >> m;
		if ((g1 > 80) and (m > 0)) a.m += 8000;
		if ((g1 > 85) and (g2 > 80)) a.m += 4000;
		if (g1 > 90) a.m += 2000;

		if (a.m > ans.m) ans = a;
		sum += a.m;
	}
	std::cout << ans.name << std::endl;
	std::cout << ans.m << std::endl;
	std::cout << sum << std::endl;
	return 0;
}