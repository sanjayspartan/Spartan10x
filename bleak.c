#include<stdio.h>
int countSetBit(int X)
{
    int count=0;
    while(X!=0)
    {
        X=(X&(X-1));
        count++;
    }
    return count;
}

int main()
{
    int t;
    printf("enter a no.\n");
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        printf("\nenter %dth no.",t);
        scanf("%d",&n);
        for(int i=1;i<n;i++)
            {
                if(n==(i+countSetBit(i)))
                    printf("0 ");
                else
                    printf("1 ");
            }
            t--;
    }
    return 0;
}
