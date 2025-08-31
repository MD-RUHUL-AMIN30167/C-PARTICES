#include<stdio.h>
void function(int x)
{
    if(x==0)
    {
        return;
    }
    
    printf("%d ",x);
    function(x-1);//function cholbe -1 kore kome jabe 
}
int main()
{
  
    // int n;
    // scanf("%d",&n);
    function(10);
   //n=10/orthtat 10 thake komte thakbe 





}