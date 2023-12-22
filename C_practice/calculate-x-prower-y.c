#include<stdio.h>
int main()
{
    int x,y, P=1, i;
    printf("Enter a number and its power\n");
    scanf("%d %d",&x,&y);
    for (i=1;i<=y;i++)
     P=P*x;
    printf("Results is %d",P);

}