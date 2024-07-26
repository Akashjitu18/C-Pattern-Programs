/* C++ Program to print pattern

A
B C
C D E
D E F G

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
        int j = 1;
        while (j <= i)
        {
            // cout << char('A' + i + j - 2) << " ";
            cout << char('A' + i + j - 2) << " ";

            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}