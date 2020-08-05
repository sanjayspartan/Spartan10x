#include<stdio.h>
int main()
{
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    while(x&(x-1))
    {
        x--;
    }
    printf("largest power of 2 which is less than or equal to the given number is %d",x);
    return 0;
}
