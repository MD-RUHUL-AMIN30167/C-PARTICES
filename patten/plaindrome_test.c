#include<stdio.h>
int main()
{
    /*

    int test_case;
    scanf("%d",&test_case);
    int plaindrome_serial[test_case];
    for(int index=0;index<test_case;index++)
    {
        scanf("%d",&plaindrome_serial[index]);
    }

    int fitst_index=0;
    int last_index=test_case-1;


    while (fitst_index<=last_index)
    {
      if(  plaindrome_serial[fitst_index]!=plaindrome_serial[last_index])
      {
        printf("THIS IS NOT PLAINDORME NUM ");
        return;
      }
      

        fitst_index++;
        last_index--;

        
    }
    printf("THIS IS  PLAINDORME NUM");
    */


    int input_case;
    scanf("%d",&input_case);
    int arrayofindex[input_case];
    for(int index=0;index<input_case;index++)
    {
        scanf("%d",&arrayofindex[index]);
    }


    for(int first_index=0,last_index=input_case-1;first_index<=last_index;first_index++,last_index--)
    {
        if (arrayofindex[first_index]!=arrayofindex[last_index])
        {
            printf("no");
            return;
        }
    }
    printf("yes");



    
    
       
    
}