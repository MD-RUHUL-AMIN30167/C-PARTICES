#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int freq[100001]={0};
    for(int i=0;i<n;i++)
    {
        freq[array[i]]+=1;
    }
    
    int max=0;
    for(int i=1;i<100001;i++)
    {
        if(freq[i]==1)
        {
            max++;
            
        }


    }
    printf("%d",max);
    





    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\n",freq[i]);
    // }
}