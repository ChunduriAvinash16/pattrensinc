#include<stdio.h>
#include<conio.h>
int main()
{
 int n,i,j;
 int px,py;
 clrscr();
 scanf("%d",&n);
 px=0;
 py=n*2-1;
 for(i=0;i<n;i++)
  {
   for(j=0;j<n*2;j++)
    {
     (px==j || j+1==py)?printf("%d",i+1):printf(" ");
     }
     px++;
     py--;
     printf("\n");
    }
    getch();
    return 0;
   }