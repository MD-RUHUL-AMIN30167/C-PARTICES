#include<stdio.h>
void function(int x,int n)
{
    //kota porjonto cholbe 
    if(x>n)
    {
        return;
    }
    printf("%d ",x);
    function(x+1,n);


}

// main function
int main()
{
    function(1,6);
    return 0;






}