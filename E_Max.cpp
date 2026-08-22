#include <iostream>
#include <algorithm>
using namespace std;

/*
                    E. Max

Given a number N, and N numbers, find maximum number in these N numbers.

Input:
First line contains a number N (1 ≤ N ≤ 10^3).

Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

Output:
Print the maximum number.

Example-->

Input:
5
1 8 5 7 5
Output:
8

*/

int main()
{
    int N;
    cin >> N;

    int A[N];

    // input array elements.
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int mx = A[0];

    /*
    Check every element of the array.

    max(mx, A[i]) returns whichever value
    is larger between:

        mx
        A[i]

    If A[i] is larger, mx becomes A[i].

    Example:

        mx = 1

        A[1] = 8

        max(1, 8) = 8

        mx becomes 8
    */

    for (int i = 0; i < N; i++)
    {
        mx = max(mx, A[i]);
    }

    cout << mx;

    return 0;
}