#include<stdio.h>
int main()
{

    int m,n,s;
    scanf("%d %d %d",&m,&n,&s);
    int array[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }



   

    int x,count=0;

    for(int k=0;k<s;k++)
    {
        scanf("%d",&x);


        for(int i=0;i<m;i++)
         {
           for(int j=0;j<n;j++)
           {
                if(array[i][j]==x)
                {
                    count++;
                    
                    
                }
           }
        }

     printf("%d\n",count);

     count=0;

    }
   
    

    
    return 0;

}