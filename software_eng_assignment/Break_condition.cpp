#include <stdio.h>
void display(int n)
{
    printf("Displaying the numbers from 1 to %d\n", n);
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    int num; // local variable
    printf("Enter number upto which you want to print: ");
    scanf("%d", &num); // take a natural number from the user
    display(num);
    return 0;
}