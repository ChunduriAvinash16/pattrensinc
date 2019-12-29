#include<stdio.h>
#include<conio.h>
/*
 **
 **
 ****
 ****
 ******
 ******
 */

int main()
{
 int n,i,j,k;
 clrscr();
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
k=(i%2==0)?i:i+1;
  for(j=0;j<n;j++)
   {
     if(j<k)
     {
      printf("*");
     }
     else
     {
      printf(" ");
     }
   }
   printf("\n");
  }
  getch();
  return 0;
  }