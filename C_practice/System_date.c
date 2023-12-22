#include <Windows.h>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

void main(){
   SYSTEMTIME stime;
   GetSystemTime(&stime);
   printf("%d / %d / %d",stime.wDay, stime.wMonth,stime.wYear); 
} 