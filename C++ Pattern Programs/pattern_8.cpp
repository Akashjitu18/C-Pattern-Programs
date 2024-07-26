/* C++ Program to print pattern

1
2 3
3 4 5
4 5 6 7

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
        while (j <= i)
        {
            cout << count << " ";                   // cout << i + j - 1 << " ";
            count++;
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}