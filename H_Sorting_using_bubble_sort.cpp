#include <iostream>
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
    // input the array elements.
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    /*
    Bubble Sort

    The outer loop controls how many times
    we go through the array.

    The inner loop compares neighboring elements:

        A[j] and A[j + 1]

    If the left element is greater than the right
    element, they are in the wrong order, so we swap them.

    Example:

        3 1 2

        3 > 1  -> swap
        1 3 2

        3 > 2  -> swap
        1 2 3

    After each complete pass, the largest unsorted
    element moves toward the right side of the array.
    This movement is called "bubbling".
    */

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            /*
            Compare two neighboring elements.

            If A[j] is greater than A[j + 1],
            they need to change positions for
            ascending order.
            */

            if (A[j] > A[j + 1])
            {

                int temp = A[j];

                A[j] = A[j + 1];

                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << " " << A[i];
    }

    return 0;
}