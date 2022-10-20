#include <iostream>
using namespace std;
int main()
{
	int x, y, r = 1;
	cin >> x >> y;
	while (r != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	cout << x << endl;
	return 0;
}
