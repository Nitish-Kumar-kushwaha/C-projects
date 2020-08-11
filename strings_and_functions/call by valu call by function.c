#include<stdio.h>
int add(int *p, int *q);
main()
{
    int m,n,c;
    printf("enter the value of m and n \n");
    scanf("%d%d",&m,&n);
    c=add(&m,&n);
    printf("the sum=%d",c);
}
int add(int *a, int *b)
{
    int sum;
    sum=*a+*b;
    return sum;
}

