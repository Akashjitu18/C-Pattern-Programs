/* C++ Program to print pattern

      1
    2 2
  3 3 3
4 4 4 4

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
        int space = i;                             // int space = n - i;
        while (space < n)                          // while (space)
        {                                          // {
            cout << "  ";                          //     cout << "  ";
            space++;                               //     space--;
        }                                          // }

        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}