#include<stdio.h>
#include<conio.h>
/*
*
**
***
****
*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    (j<=i)?printf("*"):printf(" ");
    printf("\n");
 }
 getch();
 return 0;
 }