#include<stdio.h>
int fib(int x)
{
    if(x<=1)
        return x;
    else
        return fib(x-1)+fib(x-2);
}

int main()
{
    int n;
    printf("enter the value ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
