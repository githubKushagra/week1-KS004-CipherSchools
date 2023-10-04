#include <iostream>
using namespace std;

int main()
{


    // only if statements
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a > 1)
    {
        cout << "The condition in if statement is correct" << endl;
    }


    // if - else statements
    float b, c;
    cout << "Enter the values of b and c: ";
    cin >> b >> c;
    if (b > 0.01 && c > b)
    {
        cout << "The condition in if statement is correct" << endl;
    }
    else
    {
        cout << "The condition in if statement is not correct" << endl;
    }


    // if - else-if - else statements
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks > 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks <= 90 && marks > 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks <= 80 && marks > 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks <= 70 && marks > 50)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks <= 50 && marks >= 33)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: E" << endl;
    }


    // another example of if - else-if - else statements
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    if (w > x && y > z)
    {
        cout << "haha" << endl;
    }
    else if (w > x && y < z)
    {
        cout << "hehe" << endl;
    }
    else
    {
        cout << "huhu" << endl;
    }
    return 0;
}