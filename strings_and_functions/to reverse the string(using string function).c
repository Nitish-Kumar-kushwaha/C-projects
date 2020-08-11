#include<stdio.h>
#include<string.h>
main()
{
    char str[100],temp;
    int i=0,j=0;
    printf("enter the sting\n");
    gets(str);
    j=strlen(str)-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("\n reversed sting is =%s",str);
}
