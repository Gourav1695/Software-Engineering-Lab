// #include <stdio.h>

// int main() {
//     int x = 1;
//     printf("The value of x is %d\n", x);
//     return 0;
// }

#include <iostream>
using namespace std;
void printString(string letters)
{
    cout << "Printing the letters of string\n";
    for (auto letter : letters)
        cout << letter << ", ";
    cout << "\nEnd of string\n";
}
int main()
{
    // a string variable
    string s = "Software engineering lab";
    // a function to print the string variable
    printString(s);
    return 0;
}
