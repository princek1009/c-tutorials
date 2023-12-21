#include<stdio.h>
int main(){
    long count=0, x;
    printf("Enter the number");
    scanf("%ld",&x);
    while (x!=0){
        x=x/10;
        count++;
    }
    printf("Total digits=%ld",count);
}