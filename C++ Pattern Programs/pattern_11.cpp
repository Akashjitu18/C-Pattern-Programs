/* C++ Program to print pattern

A B C
D E F
G H I

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + count - 1) << " ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}