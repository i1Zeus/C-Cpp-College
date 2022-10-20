#include <iostream>
#include <windows.h>

using namespace std;

void Drow();
int PlayerX();
int PlayerO();
void Win_Player_O();
void Win_Player_X();
void Not_Win();

int X, O;
int counter = 1;
char n1 = '1', n2 = '2', n3 = '3', n4 = '4', n5 = '5', n6 = '6', n7 = '7', n8 = '8', n9 = '9', input;
int main()
{
    cout << "\n\t\t\t\t\t\tWelcome To X-O Game :) \n\n\n\n\n ";
    Drow();
    do
    {
        PlayerX();
        system("cls");
        cout << "\n\n\n\n\n\n";
        Drow();
        Win_Player_X();
        counter++;
        Not_Win();
        PlayerO();
        system("cls");
        cout << "\n\n\n\n\n\n";
        Drow();
        Win_Player_O();
    } while (input != -1);
    {
        cout << "\n\n\n\t\t\t\t\t Game Over :) ";
        return 0;
    }
    return 0;
}

void Drow() ////////////Al- Qalep ////////////
{
    cout << "\n\n\t\t\t\t\t" << n1 << "\t|\t" << n2 << "\t|\t" << n3;
    cout << "\n\t\t\t\t\t\t|\t\t|";
    cout << "\n\t\t\t\t      __________|_______________|__________";
    cout << "\n\t\t\t\t\t\t|\t\t|";
    cout << "\n\t\t\t\t\t" << n4 << "\t|\t" << n5 << "\t|\t" << n6;
    cout << "\n\t\t\t\t\t\t|\t\t|";
    cout << "\n\t\t\t\t      __________|_______________|__________";
    cout << "\n\t\t\t\t\t\t|\t\t|";
    cout << "\n\t\t\t\t\t" << n7 << "\t|\t" << n8 << "\t|\t" << n9;
    cout << "\n\t\t\t\t\t\t|\t\t|\n\n\n\n\n";
}
int PlayerX() ///////////Player >> X << //////////
{
    cout << "\n\t\t Player X : ";
    cin >> X;
    if (X == 1)
        n1 = 'X';
    if (X == 2)
        n2 = 'X';
    if (X == 3)
        n3 = 'X';
    if (X == 4)
        n4 = 'X';
    if (X == 5)
        n5 = 'X';
    if (X == 6)
        n6 = 'X';
    if (X == 7)
        n7 = 'X';
    if (X == 8)
        n8 = 'X';
    if (X == 9)
        n9 = 'X';

    return X;
}
int PlayerO() ///////////Player >> O << //////////
{
    cout << "\n\t\t Player O : ";
    cin >> O;
    if (O == 1)
        n1 = 'O';
    if (O == 2)
        n2 = 'O';
    if (O == 3)
        n3 = 'O';
    if (O == 4)
        n4 = 'O';
    if (O == 5)
        n5 = 'O';
    if (O == 6)
        n6 = 'O';
    if (O == 7)
        n7 = 'O';
    if (O == 8)
        n8 = 'O';
    if (O == 9)
        n9 = 'O';
    return O;
}
void Win_Player_O()
{
    if ((n1 == n4 && n1 == n7) || (n1 == n2 && n1 == n3) || (n2 == n5 && n2 == n8) || (n3 == n6 && n3 == n9) || (n4 == n5 && n4 == n6) || (n7 == n8 && n7 == n9) || (n1 == n5 && n1 == n9) || (n3 == n5 && n3 == n9))
    {
        cout << "\n\t\t Player O is the winner \n\n";
        cout << "if you went exit from the Game press (-1 ) else press any Key :  ";
        cin >> input;
        if ((input >= 0 && input <= 1000) || (input >= 'a' && input <= 'z'))
        {
            n1 = '1', n2 = '2', n3 = '3', n4 = '4', n5 = '5', n6 = '6', n7 = '7', n8 = '8', n9 = '9';
            system("cls");
            cout << "\n\n\n\n\n\n";
            Drow();
            counter = 1;
        }
    }
}
void Win_Player_X()
{
    if ((n1 == n4 && n1 == n7) || (n1 == n2 && n1 == n3) || (n2 == n5 && n2 == n8) || (n3 == n6 && n3 == n9) || (n4 == n5 && n4 == n6) || (n7 == n8 && n7 == n9) || (n1 == n5 && n1 == n9) || (n3 == n5 && n3 == n9))

    {
        cout << "\n\t\t Player X is the winner \n\n";
        cout << "if you went exit from the Game press (-1 ) else press any Key :  ";
        cin >> input;
        if ((input >= 0 && input <= 1000) || (input >= 'a' && input <= 'z'))
        {
            n1 = '1', n2 = '2', n3 = '3', n4 = '4', n5 = '5', n6 = '6', n7 = '7', n8 = '8', n9 = '9';
            system("cls");
            cout << "\n\n\n\n\n\n";
            Drow();
            counter = 1;
        }
    }
}
void Not_Win()
{
    if (counter == 6)
    {
        cout << "\n\t\t no one has won \n\n";
        cout << "if you went exit from the Game press (-1 ) else press any Key :  ";
        cin >> input;
        if ((input >= 0 && input <= 1000) || (input >= 'a' && input <= 'z'))
        {
            n1 = '1', n2 = '2', n3 = '3', n4 = '4', n5 = '5', n6 = '6', n7 = '7', n8 = '8', n9 = '9';
            system("cls");
            cout << "\n\n\n\n\n\n";
            Drow();
            counter = 1;
        }
    }
}
