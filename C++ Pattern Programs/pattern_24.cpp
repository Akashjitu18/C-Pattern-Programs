/* C++ Program to print pattern

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

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
        int space = i;
        while (space < n)
        {
            cout << "  ";
            space++;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }

        j = 1;
        while (j < i)
        {
            cout << i - j << " ";
            j++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}