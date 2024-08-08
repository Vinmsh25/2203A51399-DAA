#include<stdio.h>
#include<stdlib.h>
void mul(int *,int *, int, int);
main()
{
	int *p1,*p3,*p2,n,m,i,j,k,sum=0;
	printf("\n enter size");
	scanf("%d%d",&m,&n);
	p1=(int *)calloc((m*n),sizeof(int));
	p2=(int *)calloc((m*n),sizeof(int));
	
	if(p1==NULL&&p2==NULL&&p3==NULL)
	printf("no space");
	else
	{
		printf(" enter values");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",(p1+(i*n+j)));
				}
			}
		printf("enter values");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",(p2+(i*n+j)));
				}
			}
			mul(p1,p2,m,n);
			}
		}
		void mul(int *p1,int *p2,int m,int n)
		{
			int *p3,i,j,k;
			p3=(int *)calloc((m*n),sizeof(int));
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					*(p3+(i*n+j))=0;
						for(k=0;k<n;k++)
						{
							*(p3+(i*n+j))=*(p3+(i*n+j))+(*(p1+(i*n+k))*(*(p2+(k*n+j))));
						}
						printf("\n");
				}
			}
			printf("the resultant matrix\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%4d",*(p3+(i*n+j)));
					}
				printf("\n");
				}
		}
	

