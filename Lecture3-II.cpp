#include <iostream>
using namespace std;

int main(){
    int num1 , num2;
    
    // two ways to take input
    num1 = 20;
    num2 = 34;

    /* cin>>num1;
       cin>>num2;*/

    int result;
    result = num1 + num2;

    // two ways to print the sum of any two digits.
    cout<<"Sum: "<<result<<endl;           // 'endl' is indicating to shift to the next line.
    cout<<"Sum: "<<num1 + num2<<endl;
    
    // we can write it in single line.
    cout<<"Sum: "<<result<<endl<<"Sum: "<<num1 + num2;
}