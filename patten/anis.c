#include<stdio.h>
int ar[1000];
int main()

{
    int lenght;
    scanf("%d",&lenght);
    for(int i=0;i<lenght;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    int index;
    scanf("%d",&index);
    for(int i=index;i<lenght-1;i++)
    {
        ar[i]=ar[i+1];
    } 
    lenght--;
    for(int i=0;i<lenght;i++)
    {
        printf("%d ",ar[i]);
    }
   
    
    return 0;
}