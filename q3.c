#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a no. ");
    scanf("%d",&n);
    printf("which bit you want to check ");
    scanf("%d",&i);
    if(n&(1<<i))
        printf("yes the bit is set");
    else
        printf("No the bit is not set");
    return 0;
}
