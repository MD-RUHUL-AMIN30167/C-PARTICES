#include<stdio.h>


void function(int *x,int *y)
{
    *x*=10;
    *y*=10;
    printf("%d %d\n",*x,*y);
   
}

int main()
{
   // int a=10;int b=10;
   int a,b;
   scanf("%d %d",&a,&b);//if scanf neta chaille 
   
   
    function(&a,&b);
   
    printf("%d %d\n",a,b);
   
}