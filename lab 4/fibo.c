#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n ;
    printf("Enter the value of n  \n");
    scanf("%d",&n);
    printf("the fibonacci value at the place %d is %d\n",n,fib(n));
    getchar();
    return 0;
}