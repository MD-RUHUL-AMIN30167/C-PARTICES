#include<stdio.h>

/* 
return_type function_name (parameters)
{
    statments;


    return resuelts;
} */

int add(int a,int b)
{
    printf("function start\n");

    int sum=a+b;
    return sum;
}
int main()
{
    // add(10,20);
     int resuelt=add(10,20);
    printf("%d\n",resuelt);
  
    printf("%d\n",add(500,300));
     printf("function end\n");
    return 0;
}
