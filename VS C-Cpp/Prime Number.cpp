#include <iostream>
using namespace std;
int main()
{
	int n, m = 0;
	cin >> n;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			m++;
			break;
		}
	}
	if (m > 0)
		cout << "not prime";
	else
		cout << "prime";

	return 0;
}
