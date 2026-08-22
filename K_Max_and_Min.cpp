#include <iostream>
#include <algorithm>
using namespace std;

/*
                K. Max and Min

Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input:
Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B,C ≤ 10^5)

Output:
Print the minimum number followed by a single space then print the maximum number.

Examples-->
Input:
1 2 3
Output:
1 3

Input:
-1 -2 -3
Output:
-3 -1

Input:
10 20 -5
Output:
-5 20
*/

int main()
{

    int A, B, C;
    cin >> A >> B >> C;

    /*
    Previous solution:

        int mx = max({A, B, C});
        int mn = min({A, B, C});

    Here I am solving manually without using
    built-in max() and min() functions.

    The idea:

    Compare the three numbers using if-else
    and find which one is the biggest.
    */

    int max;

    /*
    Checking maximum value.

    If A is greater than both B and C,
    then A is the maximum.

    Example:

    A = 10
    B = 20
    C = -5

    A is not greater than B,
    so this condition is false.
    */

    if (A > B && A > C)
    {
        max = A;
    }

    /*
    If A is not maximum, check B.

    If B is greater than A and C,
    then B is maximum.
    */

    else if (B > A && B > C)
    {
        max = B;
    }

    /*
    If neither A nor B is maximum,
    then C must be maximum.
    */

    else
    {
        max = C;
    }

    /*
    Checking minimum value.

    If A is smaller than both B and C,
    then A is the minimum.
    */

    int min;

    if (A < B && A < C)
    {
        min = A;
    }

    /*
    If A is not minimum, check B.

    If B is smaller than A and C,
    then B is minimum.
    */

    else if (B < A && B < C)
    {
        min = B;
    }

    /*
    If neither A nor B is minimum,
    then C must be minimum.
    */

    else
    {
        min = C;
    }

    cout << min << " " << max;

    return 0;
}