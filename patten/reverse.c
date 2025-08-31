#include<stdio.h>
int a[1000];
int b[10000];
int main()
{
    int input;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0,j=input-1;i<input;i++,j--)
    {
        b[j]=a[i];
    }
    for(int i=0;i<input;i++)
    {
        a[i]=b[i];
    }
    for(int i=0;i<input;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("REVERSE:\n");
    for(int i=0;i<input;i++)
    {
        printf("%d ",b[i]);
    }    

    return 0;

}