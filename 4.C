#include<stdio.h>
#include<conio.h>
/*
3
23
123
0123
123
23
3*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=n;i>-n;i--)
 {
  for(j=n;j>abs(i);j--)

	      printf("%d",n-j+abs(i));
    printf("\n");
   }
getch();
return 0;
}