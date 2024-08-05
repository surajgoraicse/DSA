

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int key1, key2;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= 5)
        {
            key2 = i * 2 - 1;
            key1 = n - i;
        }
        else
        {
            key1 = i - n - 1;
            key2 = 2 * n - 2 * (i - n) + 1;
        }

        for (int j = 1; j <= key1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= key2; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
