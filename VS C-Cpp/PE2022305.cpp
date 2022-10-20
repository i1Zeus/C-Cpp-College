#include <iostream>
using namespace std;
int gcd(int x, int y)
{
	int r = 1;
	while (r != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}
void mt(int n)
{
	for (int i = 1; i <= 10; i++)
	{
		int r = n * i;
		cout << n << "*" << i << "=" << r << endl;
	}
}
int main()
{
	int x, y, n;
	cin >> x >> y;
	cout << "the GCD of " << x << " & " << y << " is: " << gcd(x, y) << endl;
	cout << "--------------------------------------" << endl;
	cout << "enter the number u want the MT for?";
	cin >> n;
	mt(n);
	return 0;
}
