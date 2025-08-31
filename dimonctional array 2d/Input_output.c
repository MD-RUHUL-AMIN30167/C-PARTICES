#include<stdio.h>
int main()
{
    int m,n;
    
    scanf("%d%d",&m,&n);
    int array[n][m];
   // int inputofrow,inputofcolm;
    for(int  inputofrow=0;inputofrow<n;inputofrow){
        for(int inputofcolm=0;inputofcolm<m;inputofcolm++)
        {
            scanf("%d",&array[inputofrow][inputofcolm]);
        }
    }
  
   // int inputofrow,inputofcolm;
    for (  int inputofrow=0;inputofrow<n;inputofrow){
        for(int inputofcolm=0;inputofcolm<m;inputofcolm++)
        {
            printf("%d",array[inputofrow][inputofcolm]);
        }
    }
}