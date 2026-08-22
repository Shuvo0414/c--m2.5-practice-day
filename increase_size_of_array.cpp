#include <iostream>
using namespace std;

/*
Practice Problem -- 2.
Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.



Sample Input:
5
1 2 3 4 5
10
6 7 8 9 10
Sample Output:
1 2 3 4 5 6 7 8 9 10

Sample Input:
3
10 20 10
5
60 40
Sameple Output:
10 20 10 60 40
*/

int main()
{
    int N;
    cin >> N;

    int *A = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int *B = new int[M];

    /*
    Copy all elements from A to B.

    Example:

    A = {1,2,3,4,5}

    B = {1,2,3,4,5,_,_,_,_,_}

    */

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    /*
    Delete array A because we don't need it anymore.
    */

    delete[] A;

    /*
    Take remaining input for B.

    Start from index N because
    first N positions are already filled.
    */

    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    /*
    Print final B array.
    */

    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    /*
    Free B memory.
    */

    delete[] B;

    return 0;
}