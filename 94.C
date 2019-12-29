#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j,k,p;
  clrscr();
  scanf("%d",&n);
  for(i=1;i<=n;i++);
  {
   k=(i%2!=0)?i+1:i;
   for(p=n+1;p>k;p--)
   {
    printf(" ");
    }
   for(j=0;j<k;j++)
   {
    printf("*");
   }
    printf("\n");
   }
   getch();
   return 0;
   }