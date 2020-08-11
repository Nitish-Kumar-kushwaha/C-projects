#include<stdio.h>
main()
{
    int a[20][20],b[20][20],c[20][20],i,j,m,n;
    printf("enter the row and column\n");
    scanf("%d%d",&m,&n);
    printf("enter the a matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
             printf("\n");
    printf("enter the B matrices \n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            printf("%d",b[i][j]);
             printf("\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    printf("resultant c matrix is=\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("%d\t",c[i][j]);
    printf("\n");
        }
}
