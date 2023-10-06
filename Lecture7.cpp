#include <iostream>
#include <string>
using namespace std;

int main()
{

    // while loop
    long password;
    cout << "enter the password: ";
    cin >> password;

    while (password < 99999999)
    {
        cout << "The password doesn't meet the required conditions, Please enter the password again: ";
        cin >> password;
    }

    cout << "The user has now entered a correct password" << endl;





    // best things of do-while loop is it runs atleast one time whether the condition is correct or not.
    // do-while loop syntax - do { statements } while(condition) ;

    int pwd;

    do
    {
        cin >> pwd;
    } while (pwd < 999999);

    cout << "The user has now entered a correct password" << endl;





    // continue statement.

    cout << "Odd numbers btw 1 to 100: ";
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}