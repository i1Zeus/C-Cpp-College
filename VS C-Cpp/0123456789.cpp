#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 1, n1 = 0;
    for (int i = 0; i < 9; i++)
    {
        n = n1;
        for (int j = 0; j < 9; j++)
        {
            if (n >= 0)
            {
                cout << n << " ";
                n--;
            }
            else
            {
                cout << a << " ";
                a++; // a=1
            }
        }
        n1++;
        a = 1;
        cout << endl;
    }

    return 0;
}
