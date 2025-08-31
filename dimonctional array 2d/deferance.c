#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    int sub=*ptr1-*ptr2;
    int temp=abs(sub);
    printf("%d",temp);

   


}