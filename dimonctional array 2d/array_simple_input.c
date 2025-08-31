#include<stdio.h>
int main()
{
    int array[3][4];//={ {1,2,3,4},{5,6,7,8},{9,10,11,12}  };
    
    for(int input_of_row=0;input_of_row<3;input_of_row++)
    {
        for(int input_of_colm=0;input_of_colm<4;input_of_colm++)
        {
            scanf("%d",&array[input_of_row][input_of_colm]);
        }
    }
    for(int input_of_row=0;input_of_row<3;input_of_row++)
    {
        for(int input_of_colm=0;input_of_colm<4;input_of_colm++)
        {
            printf("%d ",array[input_of_row][input_of_colm]);
        }
        printf("\n");
    }  


    return 0;
}