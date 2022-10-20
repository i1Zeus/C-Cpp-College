#include <iostream>
using namespace std;
void a(int i)
{
	if (i <= 4)
		cout << "1";
	else
		cout << "2";
}
void b(int i)
{

	if (i == 1 || i == 2 || i == 5 || i == 6)
		cout << "1";
	else
		cout << "2";
}
void c(int i)
{
	if (i % 2 == 0)
		cout << "2";
	else
		cout << "1";
}
int main()
{
	for (int i = 1; i <= 8; i++)
	{
		a(i);
		b(i);
		c(i);
		cout << endl;
	}
	return 0;
}
