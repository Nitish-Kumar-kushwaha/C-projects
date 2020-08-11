#include<stdio.h>
main()
{
    int a[100],i,n,flag,key;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the element of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the key element for the search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("the key element is present at %d position",i+1);
            exit(0);
        }
        else
            flag=0;
    }
    if(flag==0)
        printf("the key element is not present at given array\n");
}
