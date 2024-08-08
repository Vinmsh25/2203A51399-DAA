
#include<stdio.h>
const m=3,n=3;
main()
{
	int a[m][n],b[m][n],i,j;
	printf("enter 9 elements for a[i][j]");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 9 elements for b[i][j]");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	display(&a[0][0],&b[0][0]);
}
void display(int *p,int *q)
{
	int i,j,c[10][10],*r;
	r=c;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		*(r+(i*n+j))=*(p+(i*n+j))+*(q+(i*n+j));	
		}
		printf("\n");
	}
	printf("sum:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",*(r+(i*n+j)));
		}
		printf("\n");
	}
}
