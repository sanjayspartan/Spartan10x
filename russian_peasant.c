#include<stdio.h>
int main()
{
    int l,b,result=0;
    printf("enter the two values\n");
    scanf("%d%d",&l,&b);
    while(b>0)
    {
        if(!(b%2==0))
        {
            result+=l;
        }
        l=l<<1;
        b=b>>1;
    }
    printf("%d",result);
    return 0;
}
