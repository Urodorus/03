#include <iostream>

char a, b, c;
int n;
int hn(int t, char a, char b, char c)
{
    if (t == 0) return 0;
    hn(t - 1, a, c, b);
    std::cout << t << ":" << a << "->" << b << std::endl;
    hn(t - 1, c, b, a);
    return 0;

}
int main()
{
    std::cin >> n;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    hn(n, a, c, b);
    return 0;
}