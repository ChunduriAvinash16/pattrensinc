#include<stdio.h>
#include<conio.h>
/*
 5
 54
 543
 5432
 54321
 5432
 543
 54
 5*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=n;i>-n;i--)
 {
  for(j=n;j>abs(i);j--)

	      printf("%d",j);
    printf("\n");
   }
  getch();
  return 0;

  }