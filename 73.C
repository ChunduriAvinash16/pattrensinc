#include<stdio.h>
#include<conio.h>
/*
*****
*###*
*###*
*###*
*****
*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
    (i==0 || j==0 ||i==n-1 || j==n-1)?printf("*"):printf("#");
  printf("\n");
 }
 getch();
 return 0;
 }