#include<stdio.h>
int main()
{
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    if((x&(x-1))==0)
        printf("number is power of two");
    else
        printf("not a power of two");
    return 0;
}
