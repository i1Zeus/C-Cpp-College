#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
	int S, H, M;
	cout << "\n\t\t Enter Huors : ";
	cin >> H;
	cout << "\n\t\t Enter Minute : ";
	cin >> M;
	cout << "\n\t\t Enter Second : ";
	cin >> S;

	while (true)
	{
		system("cls");
		if (H <= 11)
		{
			cout << "\n\t\t\t\t\t Time :  " << H << " : " << M << " : " << S << " Am ";
		}
		else
		{
			cout << "\n\t\t\t\t\t Time :  " << H << " : " << M << " : " << S << " Pm ";
		}
		S++;
		Sleep(1000);
		if (H > 23 || M > 59)
		{
			M = 00;
			S = 00;
			H = 00;
		}
		if (S > 59)
		{
			M++;
			S = 00;
		}
		if (M > 59)
		{
			H++;
			M = 00;
		}
	}
	return 0;
}
