#include<stdio.h>
int main(){
    int a, b, L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    /*L=a>b?a:b;   to count in more efficent way */ 
    for(L=1;L<=a*b;L++ )
    if(L%a==0&&L%b==0)
    break;
    printf("LCM is %d",L);
}