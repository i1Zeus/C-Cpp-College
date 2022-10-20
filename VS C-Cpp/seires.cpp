#include <iostream>
using namespace std;
int main()
{
	float sum = 0, n;
	cin >> n;
	for (float i = 1; i <= n; i++)
	{
		sum += 1 / i;
		cout << "sum= " << sum << endl;
	}
	return 0;
}
