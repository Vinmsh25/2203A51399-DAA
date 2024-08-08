#include<stdio.h>
struct mktplc{
	char p_name[100];
	int p_id;
	int priority;
};

void sort(struct mktplc pdt[], int n) {
   int i,key,j;
    for (i=1;i<n;i++) {
        key=pdt[i].priority;
        j = i - 1;
        while (j>=0&&pdt[j].priority>key) {
            pdt[j + 1].priority=pdt[j].priority;
            j--;
        }
        pdt[j+1].priority=key;
    }
}

int main(){
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	struct mktplc pdt[n];
	for(i=0;i<n;i++){
		printf("Enter %d product name,product id & priority number\n",i+1);
		scanf("%s%d%d",pdt[i].p_name,&pdt[i].p_id,&pdt[i].priority);
	}
	sort(pdt,n);
	printf("After Sorting Product priorities:\n");
	for(i=0;i<n;i++){
		printf("%d\n",pdt[i].priority);
	}
	return 0;
}
