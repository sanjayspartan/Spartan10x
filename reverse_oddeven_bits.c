#include<stdio.h>
int evenOdd(int N)
{
    return ((N&0xAAAAAAAA)>>1)|((N&0x55555555)<<1);
}

int main()
{
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    printf("%d",evenOdd(n));
    return 0;
}
