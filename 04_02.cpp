#include <iostream>
int a[20];
int fb(int t)
{
	if (a[t] == 0) a[t] = fb(t - 1) + fb(t - 2);
	return a[t];
}
int main()
{
	a[1] = 1;
	a[2] = 1;
	int n, m;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> m;
		std::cout << fb(m) << std::endl;
	}

	return 0;

}