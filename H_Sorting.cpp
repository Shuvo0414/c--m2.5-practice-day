#include <iostream>
#include <utility>
using namespace std;

/*
                   H. Sorting

Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:

->Don't use built-in-functions.
->try to solve it with bubble sort algorithm or Selection Sort.
for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.


Input
First line contains a number N (0 < N < 103^) number of elements.

Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

Output:
Print the numbers after sorting them.

Examples-->
Input:
3
3 1 2
Output:
1 2 3

Input:
4
5 2 7 3
Output:
2 3 5 7
*/

int main()
{

    int N;
    cin >> N;

    int A[N];
    // input array elements .
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    /*
    Compare the array elements and swap them when needed.

    Here I am experimenting with the C++ built-in
    swap() function to understand how swapping works.

    IMPORTANT:
    The original problem says NOT to use built-in functions.
    So this is only my C++ practice version.

    Normally, instead of:

        swap(A[i], A[j]);

    I can manually swap using a temporary variable:

        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;

    The condition:

        A[i] < A[j]

    decides when the two elements should be swapped.
    */

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] < A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << " " << A[i];
    }

    return 0;
}