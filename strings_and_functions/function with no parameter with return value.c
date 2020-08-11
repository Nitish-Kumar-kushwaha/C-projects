#include<stdio.h>
int add();
main()
{
    int c;
    c=add();
    printf("sum=%d",c);
}
int add()
{
    int a,b,x;
    printf("enter the value of a & b \n");
    scanf("%d%d",&a,&b);
    x=a+b;
    return x;
}
