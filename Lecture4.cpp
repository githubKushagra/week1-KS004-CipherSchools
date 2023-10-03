#include <iostream>
using namespace std;

int main()
{

    // this is the program of how we can execute conditional statements.

    // compiler interprets true as 1.
    // compiler interprets false as 0.

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout<<(a>b)<<endl;
    cout<<(c>d)<<endl;
    cout<<(a>b && c>d)<<endl;
    cout<<(a<b || c<d)<<endl;
}