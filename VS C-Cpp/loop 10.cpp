#include <iostream>
using namespace std;
int main()
{
	int sum;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			cout << i << endl;
		}
	}
	cout << sum;
	return 0;
}
