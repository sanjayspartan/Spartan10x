#include<stdio.h>
#include<math.h>
int divides(int dividend,int divisor)
{
    int sign;
    sign=((dividend<0)^(divisor<0))?-1:1;
    dividend=abs(dividend);
    divisor=abs(divisor);
    int q=0;
    int temp=0;
    for(int i=31;i>=0;i--)
    {
        if(temp+(divisor<<1)<=dividend)
        {
            temp=temp+divisor<<1;
            q=q|1<<i;
        }
    }
    if(sign<0)
        q=-q;
    return q;
}
int main()
{
    int x,n;
    printf("enter the value of dividend and divisor ");
    scanf("%d %d",&x,&n);
    printf("%d",divides(x,n));
    return 0;
}

