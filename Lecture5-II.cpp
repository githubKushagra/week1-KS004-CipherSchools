#include <iostream>
using namespace std;

int main()
{

    // 1st code, 5 integers.
    int arr[5];
    int i;

    cout << "Give 5 integers as value: ";

    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "5 integers are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    

    // 2nd code, integers in reverse order.
    int arr1[10];
    for (int j = 0; j < 10; j++)
    {
        cin >> arr1[j];
    }

    cout << "Integers from inputs in reverse order: ";
    for (int j = 9; j >= 0; j--)
    {
        cout << arr1[j] << " ";
    }
    cout << endl;

    return 0;
}