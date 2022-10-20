#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main()
{
	int Miss_Number, Divisor, Plus, User_input, Diffculty, counter = 1, Result, x = 1;
	char Oper = '+';
	srand(time(0));
	cout << "\n\t\t\t\t\t  Welcome To HAIDER Game :) \n "; //////////////// Diffculty ////////////
	cout << "\n_______________________________________________________________________\n"
		 << "_______________________________________________________________________\n"
		 << "\n\t\t\t\t\t The Diffculty :) "
		 << "\n\n\t\t( 1 - 10 ) -  ===> Easy :) "
		 << "\n\t\t( 10 - 100 )  ===> Medium Difficulty :)"
		 << "\n\t\t( 100 - 1000 )  ===>  Difficult :) "
		 << "\n\t\t( Greater than 1000 )  ===>  Do not try :) "
		 << "\n\n\t\t Note : \n\t\t You have 3 attempts to enter the missing number..\n\t\t After that, the answer is given"
		 << "\n\n_______________________________________________________________________\n"
		 << "_______________________________________________________________________\n\n";
	cout << "\n\t\t\t\t Choose the Difficulty : ";
	cin >> Diffculty;
	do ////////////// Math Operations /////////////
	{
		system("cls");
		Miss_Number = rand() % Diffculty;
		if (Diffculty > 100)
		{
			Plus = rand() % 100;
			Divisor = rand() % 100;
		}
		else
		{
			Divisor = rand() % 10;
			Plus = rand() % 10;
		}

		if (x == 1)
		{
			Result = Miss_Number + Divisor - Plus;
		}
		if (x == 2)
		{
			Oper = '*';
			Result = Miss_Number * Divisor - Plus;
		}
		if (x == 3)
		{
			Oper = '/';
			Result = Miss_Number / Divisor - Plus;
		}

		if (x > 3)
		{
			x = 1;
			Oper = '+';
		}

		cout << "\n\t\t\t\t\t The Question : "
			 << " .... " << Oper << " " << Divisor << " - " << Plus << " = " << Result;
		cout << "\n\n\t\t Enter the missing number:  ";
		cin >> User_input;

		while (User_input != Miss_Number) /////////////// Re- question again ////////////
		{
			cout << "\n\n\t\t\t Wrong Number :) ...";
			cout << "\n\t\t Enter the missing number again : ";
			cin >> User_input;
			counter++;
			if (counter == 3)
				break;
		}
		if (counter == 3) ///////////// 3 attempts ////////////
		{
			cout << "\n\t\t\t Oops :) ... Missing Number IS : " << Miss_Number;
			cout << "\n\t\t\t " << Miss_Number << " " << Oper << " " << Divisor << " - " << Plus << " = " << Result;
			cout << "\n\n\n\t\tif you went exit from the Game press (-1 ) else enter any thing :  ";
			cin >> User_input;
			counter = 1;
		}
		else ////////////// Win after 3 attempts /////////////
		{
			cout << " \n\n\t\t Congratulations !!.. \n\t\t you guessed the correct number in " << counter << " times \n";
			cout << "\n\t\t\t " << Miss_Number << " " << Oper << " " << Divisor << " - " << Plus << " = " << Result;
			cout << "\n\n\n\t\tif you went exit from the Game press (-1 ) else enter any thing :  ";
			cin >> User_input;
			counter = 1;
		}
		x++;
	} while (User_input != -1); //////////// Exit /////////////
	{
		cout << " \n\n\t\t\t\t\t Game Over :) \n\n";
		return 0;
	}

	return 0;
}
