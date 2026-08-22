#include <iostream>
using namespace std;

/*
                C. Simple Calculator

Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input:
Only one line containing two separated numbers X, Y (1  ≤  X,Y  ≤  10^5).

Output:
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.

Example
Input:
5 10
Output:
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5

Note:
Be careful with spaces.

*/

int main()
{
    /*
    X and Y are integers because the problem says
    the input contains two numbers.

    cin >> X >> Y takes both values from the same line.

    Example:
    Input:
    5 10

    X = 5
    Y = 10
    */

    int X, Y;
    cin >> X >> Y;

    // Calculate the summation of X and Y.
    int sum = X + Y;
    cout << X << " " << "+ " << Y << " " << "= " << sum << endl;

    // Calculate the multiplication of X and Y.
    int multi = X * Y;
    cout << X << " " << "* " << Y << " " << "= " << multi << endl;

    // Calculate the subtraction of Y from X.
    int subtrac = X - Y;

    cout << X << " " << "- " << Y << " " << "= " << subtrac << endl;

    return 0;
}