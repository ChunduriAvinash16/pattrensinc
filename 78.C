#include<stdio.h>
#include<conio.h>
/*
1
23
456
78910
*/
int main()
{
 int n,i,j,k=1;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   {
    if(j<=i)
     {
      printf(" %d",k);
      k++;
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