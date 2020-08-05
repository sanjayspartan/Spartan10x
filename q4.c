#include<stdio.h>
void possibleSubset(char A[],int N)
{
    for(int i=0;i<(1<<N);i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i&(1<<j))
                printf("%c ",A[j]);
        }
        printf("\n");
    }
}
int main()
{
    char a[]={'a','b','c','d'};
    int n=sizeof(a)/sizeof(a[0]);
    possibleSubset(a,n);
    return 0;
}
