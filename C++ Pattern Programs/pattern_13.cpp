/* C++ Program to print pattern

A
B B
C C C

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
            cout << char('A' + i - 1) << " ";
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}