#include <stdio.h>
void fun2(int s)
{
    printf("The value you entered is : %d\n", s);
}
void fun1()
{
    int vari;
    printf("Enter any value of variable you want to print :");
    scanf("%d", &vari);
    fun2(vari);
}
int natural_no(int num)
{
    int i, sum = 0;
    // use for loop until the condition becomes false
    for (i = 1; i <= num; i++)
    {
        // adding the counter variable i to the sum value
        sum += i;
    }
    return sum;
}
int main()
{
    int num, total; // local variable
    printf("Enter a natural number : ");
    scanf("%d", &num);       // take a natural number from the user
    total = natural_no(num); // call the function
    printf("Sum of first %d natural numbers are : %d\n", num, total);
    fun1();
    return 0;
}