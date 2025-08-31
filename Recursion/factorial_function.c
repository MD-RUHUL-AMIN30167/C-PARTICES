#include<stdio.h>
int factorial(int n)
{

    //bace case
    if(n==0)
    {
        return ;
    }

    return n*factorial(n-1);


}



int main()
{
    int n;
    scanf("%d",&n);
    int ans=factorial(n);
    printf("%d",ans);
  //  factorial(n);
    
}