/* C++ Program to print pattern

      1
    2 3
  4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 1;
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
            cout << count << " ";
            j++;
            count++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}