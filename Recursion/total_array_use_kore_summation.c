#include<stdio.h>
int   function(int a[],int n)
{ 
    int sum=0;
    for(int i=0;i<n;i++)
    {
        
        printf("%d \n",a[i]);
        sum+=a[i];
       

    } 
    return sum;
        

}

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int resuelt =function(array,10);
    printf("%d",resuelt);
    
}