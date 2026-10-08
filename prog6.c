#include<stdio.h>
int main(){
 int maths,physics,chemistry;
 printf("enter the maths mark=");
 scanf("%d",&maths);
 printf("enter the physics mark=");
 scanf("%d",&physics);
 printf("enter the chemiistry mark=");
 scanf("%d",&chemistry);
 printf("---------------\n");
 printf("total cutoff=%d",maths+(physics/2+chemistry/2));
 printf("\n---------------");
 return 0; 
 } 
