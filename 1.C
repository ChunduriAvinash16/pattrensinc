#include<stdio.h>
#include<conio.h>
/*
*
**
***
****
***
**
*
*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=n;i>-n;i--)
 {
  for(j=n;j>abs(i);j--)
	      printf("*");
    printf("\n");
   }
  getch();
  return 0;
 }