#include<stdio.h>
void min(int a,int b)
{
    printf("%d\n",a^b);
}
void min_xor(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            min(a[i],a[j]);
        }
    }
}

int main()
{
    int A[]={2,5,9,10,15};
    int N=sizeof(A)/sizeof(A[0]);
    min_xor(A,N);
}
