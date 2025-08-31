#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int f[10000]={0};
    for(int i=0;i<n;i++)
    {
        f[ar[i]]=1;

    }
    for(int i=0;i<10;i++)
    {
        printf("%d %d\n",i,f[i]);
    }
    int m;
    scanf("%d",&m);
   // int a[x];
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        printf("%d ",x);
        if(f[x]==1)
        {
            printf("aca\n");
        }
        else {
            printf("nai\n");
        }
    }
    
        
        
}