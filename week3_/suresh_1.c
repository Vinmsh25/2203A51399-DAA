#include<stdio.h>
struct bkstore{
  char b_name[15],b_author[15];
  float b_price;
};

int ascen(struct bkstore bk[],int n){
  int i,j;
  float temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(bk[j].b_price>bk[j+1].b_price){
				temp=bk[j].b_price;
				bk[j].b_price=bk[j+1].b_price;
				bk[j+1].b_price=temp;
			}
		}
	}
}

int descen(struct bkstore bk[],int n){
  int i,j;
  float temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(bk[j].b_price<bk[j+1].b_price){
				temp=bk[j].b_price;
				bk[j].b_price=bk[j+1].b_price;
				bk[j+1].b_price=temp;
			}
		}
	}
}

int main() {
  int n,i,var;
  printf("Enter number of books:\n");
  scanf("%d",&n);
  struct bkstore bk[n];
  printf("Enter book details:\n");
  for(i=0;i<n;i++){
    printf("Enter book %d details :\n",i+1);
    printf("Enter book name,author name, price:\n");
    scanf("%s%s%f",bk[i].b_name,bk[i].b_author,&bk[i].b_price);
  }
  printf("Type 1 for sorting book price in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(bk,n);
  } else{
    descen(bk,n);
  }
  printf("The sorted prices are:\n");
  for(i=0;i<n;i++){
    printf("%.2f\n",bk[i].b_price);
  }
  return 0;
}
