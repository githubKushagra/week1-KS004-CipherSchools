#include <iostream>
using namespace std;

int main()
{

    // Incrementor - Decrementor
    int i, j, k;
    i = 5;
    j = 4;
    k = 1;

    cout << i << " " << j << " " << k << endl;
    j++;
    k++;
    cout << i << " " << j << " " << k << endl;
    --i;
    j--;
    cout << i << " " << j << " " << k << endl;




    // code 2 - for loop.

    // print integers from 1 to 100.
    int x;
    cout << "Integers from 1 to 100: ";
    for (x = 0; x < 100; x++)
    {
        cout << x + 1 << " ";
    }
    cout << endl;

    return 0;
}