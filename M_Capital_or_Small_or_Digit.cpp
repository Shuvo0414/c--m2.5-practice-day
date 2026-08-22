#include <iostream>
using namespace std;

/*
           M. Capital or Small or Digit

Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:
->Digits in ASCII '0' = 48,'1' = 49 ....etc
->Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
->Small letters in ASCII 'a' = 97,'b' = 98 ....etc

Input:
Only one line containing a character X which will be a capital or small letter or digit.

Output:
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

Examples-->
Input:
A
Output:
ALPHA
IS CAPITAL

Input:
9
Output:
IS DIGIT

Input:
a
Output:
ALPHA
IS SMALL

*/

int main()
{
    /*
    X is a character because the problem says:
    "Only one line containing a character X"

    char can store:
    A, B, a, b, 0, 1, 2, 9, etc.

    We are not taking an int because the input
    represents one character, not a multi-digit number.
    */

    char X;
    cin >> X;

    /*
    Check whether X is a digit.

    '0' to '9' are all digit characters.

    ASCII values:

    '0' = 48
    '1' = 49
    '2' = 50
    ...
    '9' = 57

    So instead of checking every digit separately,
    we can check the whole range:

    X >= '0' && X <= '9'
    */

    if (X >= '0' && X <= '9')
    {
        cout << "IS DIGIT" << endl;
    }

    /*
    If X is not a digit, check whether it is
    a capital alphabet.

    Capital letters are from:

    'A' to 'Z'

    ASCII:

    'A' = 65
    'B' = 66
    ...
    'Z' = 90
    */

    else if (X >= 'A' && X <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }

    /*
    If X is neither a digit nor a capital letter,
    check whether it is a small alphabet.

    Small letters are from:

    'a' to 'z'

    ASCII:

    'a' = 97
    'b' = 98
    ...
    'z' = 122
    */

    else if (X >= 'a' && X <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }

    return 0;
}