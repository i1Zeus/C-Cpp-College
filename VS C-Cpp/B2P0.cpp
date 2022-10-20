#include <iostream>
using namespace std;
int pow(int b, int p)
{
	int r = 1;
	for (int i = 1; i <= p; i++)
		r *= b;
	return r;
}
int main()
{
	int k = 2;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << pow(k, j);
		}
		cout << endl;
	}
	return 0;
}
