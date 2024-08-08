#include<stdio.h>
#include<string.h>
struct logcmpny
{
	char item[100];
	float cost;
	int destination;
};

int sort(struct logcmpny pkg[],int n)
{
  int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(pkg[j].destination>pkg[j+1].destination){
				temp=pkg[j].destination;
				pkg[j].destination=pkg[j+1].destination;
				pkg[j+1].destination=temp;
			}
		}
	}
}

int main()
{
	int i,n;
	printf("Enter number of items:\n");
	scanf("%d",&n);
	struct logcmpny pkg[n];
	for(i=0;i<n;i++)
	{
		printf(" Enter item %d details\n",i+1);
		printf("Item name,Destination time & cost:\n");
		scanf("%s%d%f",pkg[i].item,&pkg[i].destination,&pkg[i].cost);
	}
	sort(pkg,n);
	printf("Sorted Destinations are as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",pkg[i].destination);
	}
	return 0;
}
