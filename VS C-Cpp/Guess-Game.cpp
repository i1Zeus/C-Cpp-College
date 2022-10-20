#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
	cout << "\n\t\t\t Welcome To Expeat a Number Game :) \n";
	int input;
	srand(time(0));
	do
	{
		int counter = 1;
		int Random = rand() % 100;
		cout << "\n\t\t Expect Number : ";
		cin >> input;
		while (input != Random)
		{
			if (input < Random)
				cout << "\t Larger ";
			else
				cout << "\t Leas ";
			counter++;
			cin >> input;
		}
		cout << " You guessed the right number " << Random << " in " << counter << " times \n";
		cout << "if you went exit from the gaem press (-1 ) else press any Key :  ";
		cin >> input;
		system("cls");
	} while (input != -1);
	{
		cout << "\n\t\t\t\t Game Over :) \n\n\n\n";
		return 0;
	}
	return 0;
}
