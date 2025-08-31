#include<stdio.h>
int main()
{
    


    int input;
    scanf("%d",&input);
    int array[input];
    for(int i=0;i<input;i++)
    {
        scanf("%d",&array[i]);
    }
    int freq[10000]={0};
    for(int i=0;i<input;i++)
    {
        freq[array[i]]++;  
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",freq[i]);
    }



}
