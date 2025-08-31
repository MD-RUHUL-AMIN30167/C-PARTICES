#include<stdio.h>
#include<limits.h>
int main()
{

    // array deya summition//


   /*int n;
    scanf("%d",&n);
    int ar[5];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&ar[i]);
        
    }
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum=sum+ar[i];
        
    }
    printf("%d\n",sum);
    int avg=sum/n;
    printf("%d\n",avg);
    int mul=avg*n;
    printf("%d\n",mul);
   


   /// array deya minmum and maxmium /
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",ar[i]);
       
    }

    int min=INT_MAX,max=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(ar[i]<min){
            min=ar[i];
        }
        if(ar[i]>max){
            max=ar[i];
        }
        


    } 
    printf("MINIMUM  MAXMIMUM -%d\n",min,max);   */
    
     int n; 
     scanf("%d",&n);
     int row,coloum;
     for ( row = 1; row <= n; row++)
     {
        for ( coloum = 1; coloum <=row; coloum++)
        {
            printf("%d ",coloum);
          
        }
        printf("\n");
        
     
     }
     
     
      
   
    
    return 0;
}