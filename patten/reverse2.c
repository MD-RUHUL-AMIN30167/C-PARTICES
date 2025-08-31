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
    //int i=0,r=n-1;
    //while (i<=r)
    //{
       // int swap=ar[i];
       // ar[i]=ar[r];
       // ar[r]=swap;
      //  i++,r--;

       
   // }
   for(int i=0,r=n-1;i<=r;i++,r--)
   {
    int swap=ar[i];
    ar[i]=ar[r];
    ar[r]=swap;
   }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    
    
}