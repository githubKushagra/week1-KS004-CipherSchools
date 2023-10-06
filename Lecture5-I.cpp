#include <iostream>
using namespace std;

int main(){

    int x;    //variable name x of type int --> can store a single integer.

    // arrays can store multiple values in a single variable name and elements must be of same data types.
    //int arr[5];   // arr is a variable which can store multiple value with same data type with a single variable - 'arr'.

    // indexing in the arrays starts from 0 to n-1, where n is the size of array.


    // code without an array-
    int a,b,c,d;
    cout<<"Give 4 integers as input: ";
    cin>>a>>b>>c>>d;

    cout<<"The integers are: "<<a<<b<<c<<d<<endl;


    //code using array for same program-
    int arr[4];
    arr[0] = 1;   // we can take input from the user also.
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    cout<<"The integers are: "<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<endl;    // we can also print it using for loop.


    return 0;
}
