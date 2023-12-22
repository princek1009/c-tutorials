#include<stdio.h>
int main()
{
    int x[10],i,se,so;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d",x[i]);
    for(i=0;i<=9;i++)
    if(x[i]%2==0)
        se=se+x[i];
    else 
       so=so+x[i];

    printf("Sum of even = %d",se);
    printf("Sum of odd=  %d",so);
}