#include<stdio.h>
#include<conio.h>
/*
1
23
456
7891
23456
*/
int main()
{
  int n,i,j,k=0;
  clrscr();
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     if(j<=i)
      {
      if(k==9)
	k=0;
       printf("%d",++k);
      }
     }
    printf("\n");
   }
  getch();
  return 0;
}
