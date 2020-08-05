#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a no.\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=(n&(n-1));
        count++;
    }
    printf("number of ones is %d",count);
    return 0;
}
