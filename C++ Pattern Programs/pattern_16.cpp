/* C++ Program to print pattern

* * * *
* * *
* *
*

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
        int j = i;                             // int j = n - i + 1;
        while (j <= n)                         // while (j)
        {                                      // {
            cout << "* ";                      //     cout << "* ";
            j++;                               //     j--;
        }                                      // }
        cout << "\n";
        i++;
    }

    return 0;
}