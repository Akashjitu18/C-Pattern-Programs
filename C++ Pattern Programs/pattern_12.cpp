/* C++ Program to print pattern

A B C
B C D
C D E

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
        int count = i;
        while (j <= n)
        {
            cout << char('A' + count - 1) << " ";         // cout << char('A' + i + j - 2) << " ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}