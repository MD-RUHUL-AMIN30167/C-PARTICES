#include<stdio.h>
void function(int a[],int n)
{
   
     
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        
        
        
        
    }
    printf("\n");
    a[3]=-100;
    
    

}


int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9};
    function(array,5);
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }


}