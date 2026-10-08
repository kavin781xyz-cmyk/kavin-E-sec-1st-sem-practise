#include<stdio.h>
int main(){
 int days;
 printf("Enter number of days=");
 scanf("%d",&days);
 printf("no of weeks=%d",days/7);
 if(days<7){
  printf("\nIt is not a week it is considered as  a day");
  }
 }
