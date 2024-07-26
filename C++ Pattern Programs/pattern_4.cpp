/* C++ Program to print pattern

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 1;
    while (i <= n)                           // while (i <= n)
    {                                        // {                                          
        int j = n;                           //     int j = 1;
        while (j > 0)                        //     while (j <= n)    
        {                                    //     {                                 
            cout << j << " ";                //         cout << n - j + 1 << " ";
            j--;                             //          j++;
        }                                    //     }
        cout << "\n";                        //     cout << "\n";
        i++;                                 // } 
    }                                     

    return 0;
}