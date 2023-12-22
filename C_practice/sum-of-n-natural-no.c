#include<stdio.h>
int main(){
    int N, S=0, i;
    printf("Enter the natural number");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    S=S+i;
    printf("sum is %d",S);
}