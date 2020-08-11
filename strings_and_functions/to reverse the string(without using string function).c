#include<stdio.h>
#include<string.h>
main()
{
    char str[100],temp;
    int i=0,j=0,len;
    printf("enter the sting\n");
    gets(str);
    j=stringlenght(str)-1;
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
int stringlenght(char str[])
{
    int k=0;
    while(str[k]!='\0')
        k++;
    return k;
}
