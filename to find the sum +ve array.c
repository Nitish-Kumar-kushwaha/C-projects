#include<stdio.h>
main()
{
    int a[100],sum1=0,sum2=0,i,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("arrays are \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            sum1=sum1+a[i];
        else
            sum2=sum2+a[i];
    }
    printf("sum of positive terms are =%d\n",sum1);
    printf("sum of negative terms are=%d\n",sum2);
}
