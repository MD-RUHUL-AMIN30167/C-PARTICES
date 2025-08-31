#include<stdio.h>
void swap(int *a,int *b)
{
    

    int temp=*a;
    *a=*b;
    *b=temp;
    printf("before %d %d\n",*a,*b);

   
}
int main()
{
    int a=5,b=6;
    swap(&a,&b);
    printf("after %d %d\n",a,b);


    
}