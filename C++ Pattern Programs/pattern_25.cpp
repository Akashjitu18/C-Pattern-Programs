/* C++ Program to print pattern

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << j - i + 1 << " ";
            j++;
        }

        int k = 1;
        while (k < 2 * i - 1)
        {
            cout << "* ";
            k++;
        }

        int l = n - i + 1;
        while (l > 0)
        {
            cout << l << " ";
            l--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}