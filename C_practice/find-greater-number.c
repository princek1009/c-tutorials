#include<stdio.h>
int main()
{
    int /*k,*/a,b,c;
    printf("Enter three no");
    scanf("%d %d %d",&a,&b,&c);
    /*
    if(a>b&&a>c)
       k=a;
    if(b>c&&b>a)
       k=b;
    if(c>a&&c>b)
       k=c;   
    */   
    /* if (a>b&&a>c)
       k=a;
       else{
        if(b>c)
        k=b;
        else
        k=c;
       }
     */
    /*
    if(a>b)
    {
        if(a>c)
        k=a;
        else
        k=c;
    }
    else{
        if(b>c)
        k=b;
        else
        k=c;
    }
    */
   /*
   k=a>b ?a>c?a:c :b>c?b:c;
   */

    printf("Greatest Number is %d",/*k*/a>b ?a>c?a:c :b>c?b:c);
}