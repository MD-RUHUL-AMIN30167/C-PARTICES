#include<stdio.h>
#include<string.h>
int main()
{
    char string[10]="ruhulamin";
    int f[26]={0};
    int length=strlen(string);
    for(int index1 =0;index1<length;index1++)
    {
        char ch=string[index1];
        int index2= ch-'a';
        f[index2]=1;





    }
    int sum=0;

    for(int index=0;index<26;index++)
    {
        sum+=f[index];
        if(f[index]==1)
        {
            
         printf("%c  -  %d \n",index+'a',f[index]);

        }
    }                                                                                                                                                                            6
    printf("%d",sum);
       
    return 0;
}
