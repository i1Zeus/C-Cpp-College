#include <iostream>
using namespace std;
int main()
{
	int n, sum, m;
	cout << "add number of coloms ";
	cin >> m;
	cout << "add number of rows ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
		sum += i;
		if (i % m == 0)
		{
			cout << "sum = " << sum << endl;
			sum = 0;
		}
	}
	return 0;
}
