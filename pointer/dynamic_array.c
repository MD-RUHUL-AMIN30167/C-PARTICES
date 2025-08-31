#include<stdio.h>
#include<stdlib.h>
int main()
{

    ////array deya malloc kora 


    int *array=(int*)malloc(10*sizeof(int ));
    for(int i=0;i<10;i++)
    {
        array[i]=i+1;

    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",array[i]);

    }
    // printf("\n");


    ///array deya realloc kora 
    int temp;
    array=(int *)realloc(array, 20*sizeof(int ));
    if(array==NULL)
    {
        array=temp;
    }
    else {
        printf(" error ");
    }
    for(int i=10;i<20;i++)
    {
        array[i]=i+1;
    }
    for(int i=10;i<20;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
