#include<stdio.h>
#include<conio.h>
/*
1
22
333
4444
555
66
7*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=n;i>-n;i--)
 {
  for(j=n;j>abs(i);j--)

	      printf("%d",n-i);
    printf("\n");
   }
getch();
return 0;
}