#include<stdio.h>
struct pkg{
  char c_state[10],c_city[10],del_method[10];
  int c_pincode,tracking_num;
};

int ascen(struct pkg pg[],int n){
  int i,j,indx,temp;
  for(i=0;i<n-1;i++){
    indx=i;
    for(j=i+1;j<n;j++){
      if(pg[j].tracking_num<pg[indx].tracking_num){
        indx=j;
      }
    }
    temp = pg[indx].tracking_num;
    pg[indx].tracking_num = pg[i].tracking_num;
    pg[i].tracking_num = temp;
  }
}

int descen(struct pkg pg[],int n){
  int i,j,indx,temp;
  for(i=0;i<n-1;i++){
    indx=i;
    for(j=i+1;j<n;j++){
      if(pg[j].tracking_num>pg[indx].tracking_num){
        indx=j;
      }
    }
    temp = pg[indx].tracking_num;
    pg[indx].tracking_num = pg[i].tracking_num;
    pg[i].tracking_num = temp;
  }
}

int main() {
  int n,i,var;
  printf("Enter number of packages:\n");
  scanf("%d",&n);
  struct pkg pg[n];
  printf("Enter package details:\n");
  for(i=0;i<n;i++){
    printf("Enter package %d details :\n",i+1);
    printf("Enter customers city,state,pincode,delevary method and tracking number:\n");
    scanf("%s%s%d%s%d",pg[i].c_city,pg[i].c_state,&pg[i].c_pincode,pg[i].del_method,&pg[i].tracking_num);
  }
  printf("Type 1 for sorting track no in ascending and 2 for sorting in descending order:\n");
  scanf("%d",&var);
  if(var==1){
    ascen(pg,n);
  } else{
    descen(pg,n);
  }
  printf("\n\nThe sorted tracking numbers are:\n");
  for(i=0;i<n;i++){
    printf("%d\n",pg[i].tracking_num);
  }
  return 0;
}
