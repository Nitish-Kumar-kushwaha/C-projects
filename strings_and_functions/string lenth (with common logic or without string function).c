#include<stdio.h>
main()
{
    char str[20];
    int len;
    printf("enter the string\n");
    gets(str);
    len=stringlength(str);
    printf("length=%d\n",len);
}
int stringlength(char str[])
{
 int i=0;
 while(str[i]!='\0')
 {
     i++;
 }
 return i;
}
