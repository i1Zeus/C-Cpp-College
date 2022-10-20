#include <iostream>
using namespace std;
void shape(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << i * i * i << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cout << "Enter the number of rows?";
	cin >> n;
	shape(n);

	return 0;
}
