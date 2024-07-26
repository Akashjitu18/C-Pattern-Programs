/* C++ Program to print pattern

D
C D
B C D
A B C D

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
        while (j > 0)
        {
            cout << char('A' + n - j ) << " ";             
            // cout << n - j + 1 << " ";
            j--;
        }
        cout << "\n";
        i++;
    }

    return 0;
}