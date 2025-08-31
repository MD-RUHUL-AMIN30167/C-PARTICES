#include<stdio.h>
#include<string.h>
#include<ctype.h>
//string a length ber korer jonno ???
// strlrn libery funcion use
void length(char c[])
{
    int n=strlen(c);
    printf("%d\n",n);
    printf("%s",c);

}
int main()
{
    
    char a[20]="ruhulamin";
    length(a);
}

/*


//upper case ber korer 


void uppertofirstchar(char c[])
{
    c[0]=toupper(c[0]);
    c[5]=toupper(c[5]);
    printf("%s",c);

}
int main()
{
    char s[20]="ruhulamin";
    uppertofirstchar(s);
}*/