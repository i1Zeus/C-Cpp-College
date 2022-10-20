#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0, s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s += i;
		sum += s;
	}
	cout << sum;
	return 0;
}
