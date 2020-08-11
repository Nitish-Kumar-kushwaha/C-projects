#include<stdio.h>
main()
{
    float avg;
    int a[100],i,n,sum=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("average of array =%f",avg);
}
