#include<stdio.h>
int pow(int X,int N)
{
    int res=1;
    for(int i=1;i<=N;i++)
    {
        res*=X;
    }
    return res;
}
int main()
{
    int x,n;
    printf("enter the two values ");
    scanf("%d %d",&x,&n);
    printf("%d",pow(x,n));
    return 0;
}
