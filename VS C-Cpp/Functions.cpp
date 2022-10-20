#include <iostream>
using namespace std;
// Power F.
int pow(int b, int p)
{
	int r = 1;
	for (int i = 1; i <= p; i++)
		r *= b;
	return r;
}

// Factorial F.
int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}

// Revers F.
int res(int n)
{
	int num = 0, r, d = 0;
	while (n != 0)
	{
		r = n % 10;
		num = (num * 10) + r;
		n /= 10;
		d++;
	}
	return num;
}

// Dig F.
int dig(int num)
{
	int d = 0;
	while (num != 0)
	{
		num /= 10;
		d++;
	}
	return d;
}

// Binary F.
int BIN(int num)
{
	int b = 0, re, x = 1;
	while (num != 0)
	{
		re = num % 2;
		num /= 2;
		b += re * x;
		x *= 10;
	}
	return b;
}

// GCD F.
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

// Prime Number F.
void prime(int n)
{
	int m = 0;
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
}

// App F.
int main()
{
	int nr, num, d, b, numy;
	cin >> num >> numy;
	b = BIN(999);
	nr = res(num);
	d = dig(num);
	cout << pow(2, 2) << endl;
	cout << fact(6) << endl;
	cout << gcd(num, numy) << endl;
	cout << nr << endl;
	cout << d << endl;
	cout << b << endl;
	prime(num);
	return 0;
}
