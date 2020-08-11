#include<stdio.h>
void exchange(int *a , int *b);
main()
{
    int a,b;
    printf("print the value of a & b\n");
    scanf("%d%d",&a,&b);
    exchange(&a,&b);
    printf("a=%d\tb=%d\n",a,b);
}
void exchange(int *x ,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
