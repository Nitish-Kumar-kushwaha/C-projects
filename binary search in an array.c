#include<stdio.h>
main()
{
    int a[30],i,n,mid,low,high,key;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key element\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("the key element is found\n");
            break;
        }
        if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    if(low>high)
    printf("key element is not found\n");
}
