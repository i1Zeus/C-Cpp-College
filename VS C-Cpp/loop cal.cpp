#include <iostream>
using namespace std;
int main()
{
	int n, d = 0, i = 1;
	cin >> n;
	while (i < n)
	{
		if (n / i != 0)
		{
			d++;
			i *= 10;
		}
	}
	cout << d;
	return 0;
}
