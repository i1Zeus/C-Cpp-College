#include <iostream>
using namespace std;

int main()
{
    int n, c, s = 0;
    cout << "number= ";
    cin >> n;
    do
    {
        s += n;
        c = n;
        cout << "number= ";
        cin >> n;
    } while (n >= 0 || c >= 0);
    cout << "Sum= " << s;
    return 0;
}
