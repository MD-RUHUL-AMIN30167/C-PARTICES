#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int matrix [n][n];
    int ifmatrix=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(i==j&&matrix[i][j]!=1)
            {
                ifmatrix=0;
            }
            else if(i!=j&&matrix[i][j]!=0)
            {
                ifmatrix=0;

            }

        }
    }
    if (ifmatrix)
    {
        printf("Yes");
        /* code */
    }
    else {
        printf("no");
    }
    
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d %d",matrix[i][j]);
//         }
//     }
//

 }