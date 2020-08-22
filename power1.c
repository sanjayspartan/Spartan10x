#include<stdio.h>
int pow(int x,int n)
{
    if(n==0)
        return 1;
    else
        return x*pow(x,n-1);
}
int main()
{
    int x,n;
    printf("enter the two values ");
    scanf("%d %d",&x,&n);
    printf("%d",pow(x,n));
    return 0;
}
