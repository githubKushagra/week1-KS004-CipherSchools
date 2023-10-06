#include <iostream>
using namespace std;

int main(){

    /* while loop syntax
    while(condition)
    {
        statements;
    }
    */

    // print 1oo to 1 using while loop

    int i = 100;

    cout<<"Integers from 100 to 1: ";
    while(i>0)
    {
        cout<<i<<" ";
        i--;
    }
    cout<<endl;



    // break statement 

    int j = 100;
    int input;

    // guess the number 65.
    // user have 100 chance.

    for(int i=0;i<100;i++){
        cin>>input;

        if(input == 65){
            cout<<"Congrats, you have guessed it correct in "<<i+1<<"th chance.";
            break;
        }
    }

    return 0;
}