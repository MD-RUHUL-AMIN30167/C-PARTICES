#include<stdio.h>
int array[10000];
int sum;
void function(int i,int n)
{
    if(i==n)
    {
        return;
    }
    sum+=array[i];
    function(i+1,n);

}
int main()
{

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    function(0,n);
    printf("%d",sum);


}
