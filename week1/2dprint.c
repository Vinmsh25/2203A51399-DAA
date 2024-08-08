#include<stdio.h>
//const m=3,n=3;
main()
{
	int a[20][20],b[20][20],i,j,m,n;
	printf("enter m,n values");
	scanf("%d %d",&m,&n);
	printf("enter elements for a[i][j]");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
