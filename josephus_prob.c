#include<stdio.h>
int main()
{
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    int temp=x;
    while(x&(x-1))
    {
        x--;
    }
    printf("%d",((temp-x)<<1)+1);
              //or
    printf("\n%d",(temp-x)*2+1);
    return 0;
}
