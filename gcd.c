#include <stdio.h>
int gcd(int  ,int );

int gcdn(int ,int );

int main()
{
    int a[100],b,c,temp,k;
    printf("ENTER THE NUMBER OF ELEMENTS FOR WHICH GCD IS TO FIND");
     scanf("%d",&k);
        for(int j=0;j<=k;j++)
        {
        printf("ENTER THE %d ELEMENTS:",j);
        scanf("%d",a[j]);
        }
        int gcd(int b ,int c)
{
    if(a==0)
        return b;
    if(b=0)
        return a;
    else
        return gcd(c,b%c);
}
int gcdn(int a[],int n)
{
    int i, temp=a[0];
    for( i=1;i<=n;i++)
    {
        temp=gcd(temp, a[i]);
    }
    return temp;
}
    printf("GCD IS %d",gcdn(int a[],int n));
    return 0;
}
