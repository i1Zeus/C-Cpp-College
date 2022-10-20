#include <bits/stdc++.h>
using namespace std;

void CLB(int n, int arr[], int len, int L)
{
    for (int i = 0; i < L; i++)
    {
        cout << arr[n % len];
        n /= len;
    }
    cout << endl;
}

void print(int arr[], int len, int L)
{
    for (int i = 0; i < (int)pow(len, L); i++)
    {
        CLB(i, arr, len, L);
    }
}

int main()
{
    int arr[] = {1, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int L = 3;
    print(arr, len, L);

    return 0;
}
