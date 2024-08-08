#include<stdio.h>
struct amz{
  char p_name[15];
  float price;
};

int ascen(struct amz eby[],int n){
    int i,key,j;
    for (i=1;i<n;i++) {
        key=eby[i].price;
        j = i - 1;
        while (j>=0&&eby[j].price>key) {
            eby[j + 1].price=eby[j].price;
            j--;
        }
        eby[j+1].price=key;
    }
}

int descen(struct amz eby[],int n){
    int i,key,j;
    for (i=1;i<n;i++) {
        key=eby[i].price;
        j = i - 1;
        while (j>=0&&eby[j].price<key) {
            eby[j + 1].price=eby[j].price;
            j--;
        }
        eby[j+1].price=key;
    }
}

int main() {
  int n,i,var;
  printf("Enter number of products:\n");
  scanf("%d",&n);
  struct amz eby[n];
  printf("Enter product details:\n");
  for(i=0;i<n;i++){
    printf("Enter product %d details :\n",i+1);
    printf("Enter product name, price:\n");
    scanf("%s%f",eby[i].p_name,&eby[i].price);
  }
  printf("Type 1 for sorting price in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(eby,n);
  } else{
    descen(eby,n);
  }
  printf("The sorted prices are:\n");
  for(i=0;i<n;i++){
    printf("%.2f\n",eby[i].price);
  }
  return 0;
}
