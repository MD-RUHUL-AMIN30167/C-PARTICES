#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0,r=n-1;i<=r;i++,r--)
    {
        if(ar[i]!=ar[r])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");
}