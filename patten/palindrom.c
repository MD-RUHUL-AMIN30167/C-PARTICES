#include<stdio.h>
int main()
{
    //int n;
    char n;
    scanf("%c",&n);
    //int ar[n];
    char ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int i=0,r=n-1;
    //int paln=1;
    while (i<=r)
    {
       if(ar[i]!=ar[r])
       {
        printf("NO\n");
        return 0;
       // paln=0;
        //break;
       }
       i++;
       r--;

       
    }
    printf("YES\n");                             
     
    //if(paln==1)
   // {
       // printf("YES\n");
   // }
    //else{
        //printf("NO\n");
   // }

    
    
}