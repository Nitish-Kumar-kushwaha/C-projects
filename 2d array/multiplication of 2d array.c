#include<stdio.h>
main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,m,n,p,q;
    printf("enter row and column\n");
    scanf("%d%d",&m,&n);
    printf(" enter the matrix a\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("Enter p q.\n");
    scanf("%d%d",&p,&q);
    printf(" enter the matrix b\n");
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++) 
    for(j=0;j<q;j++)
    c[i][j]=0;
    for(i=0;i<m;i++)
    for(j=0;j<q;j++)
    for(k=0;k<n;k++)
    c[i][j]+=a[i][k]*b[k][j];
    printf("\n\n\nResultant - \n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
}
