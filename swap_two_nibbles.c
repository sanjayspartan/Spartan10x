#include<stdio.h>
int swap_nibbles(int x)
{
    return ((x&0x0F)<<4)|((x&0xF0)>>4);
}
int main()
{
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    printf("%d",swap_nibbles(n));
    return 0;
}
