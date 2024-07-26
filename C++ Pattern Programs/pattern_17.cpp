/* C++ Program to print pattern

      *
    * *
  * * *
* * * *

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
            cout << "* ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}