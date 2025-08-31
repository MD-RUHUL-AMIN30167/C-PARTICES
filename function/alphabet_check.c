#include<stdio.h>
void alphabet_check(char c)
{
    if('a'<= c&&c<='z')
    {
        printf("smalllatter \n");
    }
    else {
        printf("nolatter \n");
    }

}
int main()  
{ 
    alphabet_check('d');
    alphabet_check('D');
    return 0;
    
}