#include <iostream>
using namespace std;
float exchange(float us)
{
	float iq;
	iq = us * 1.48;
	return iq;
}

int main()
{
	float usd, iqd;
	cout << "Enter the value of the money in US Dollor:";
	cin >> usd;
	iqd = exchange(usd);
	cout << iqd;

	return 0;
}
