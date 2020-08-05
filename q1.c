#include<stdio.h>
void isPowerOfTwo(int x)
{
if(x==0)
    printf("invalid");
else
{
    while (x%2==0)
        x/=2;
    if(x==1)
        printf("number is power of two");
    else
        printf("not a power of two");
}
}

int main()
{
    int a;
    printf("enter a no.\n");
    scanf("%d",&a);
    isPowerOfTwo(a);
    return 0;
}
