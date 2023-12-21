#include<stdio.h>
int main(){
     int N,P=1,i;
     printf("Enter a natural no ");
     scanf("%d",&N);
     for (i=1;i<=N;i++)
     P=P*i;
     printf("Product is %d",P);
}