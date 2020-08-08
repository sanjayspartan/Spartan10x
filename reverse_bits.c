#include<stdio.h>
int reverse(int k)
{
    return (k<<31);
}

int main()
{
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    int temp=reverse(x);
    printf("%u",temp);
    return 0;
}
