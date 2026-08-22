#include <iostream>
using namespace std;

/*
Practice Problem : 1.
Question: At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.

Sample Input:
5
1 2 3 4 5
Sample Output:
1 2 3 4 5

*/

/*
get_array() function:

This function receives the size of the array.

Because we need to return an array from a function,
we cannot create a normal local array.

Example:

int ar[n];

This array will be destroyed after the function ends.

So we create a dynamic array using new.

new creates memory in the heap, which remains alive
after the function returns.
*/

int *get_array(int n)
{
    /*
    Create a dynamic integer array of size n.

    Example:

    n = 5

    ar can store:

    ar[0] ar[1] ar[2] ar[3] ar[4]
    */

    int *ar = new int[n];

    /*
    Take input values and store them in the array.

    Example input:

    1 2 3 4 5

    Stored as:

    ar = {1,2,3,4,5}
    */

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    return ar;
}

int main()
{
    int N;
    cin >> N;

    /*
    Call get_array() and receive the returned array.

    ar now stores the address of the dynamic array
    created inside get_array().
    */
    int *ar = get_array(N);

    for (int i = 0; i < N; i++)
    {
        cout << " " << ar[i];
    }

    /*
    Free the dynamically allocated memory.

    Because we used:

        new int[n]

    We should use:

        delete[]

    after finishing the work.
    */

    delete[] ar;

    return 0;
}