#include<stdio.h>
struct rtlstr{
	char pdt_name[100];
	int pdt_id;
	float pdt_cost;
};

void sort(struct rtlstr pdtsort[], int n) {
    int i, j, indx;
    struct rtlstr temp;
    for (i=0;i<n-1;i++) {
        indx=i;
        for (j=i+1;j<n;j++) {
            if (pdtsort[j].pdt_id<pdtsort[indx].pdt_id) {
                indx=j;
            }
        }
        temp=pdtsort[indx];
        pdtsort[indx]=pdtsort[i];
        pdtsort[i]=temp;
    }
}

int main(){
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	struct rtlstr pdtsort[n];
	for(i=0;i<n;i++){
		printf("Enter %d product name,product id & pdt_cost\n",i+1);
		scanf("%s%d%f",pdtsort[i].pdt_name,&pdtsort[i].pdt_id,&pdtsort[i].pdt_cost);
	}
	sort(pdtsort,n);
	printf("After Sorting Product IDs:\n");
	for(i=0;i<n;i++){
		printf("%d\n",pdtsort[i].pdt_id);
	}
	return 0;
}
