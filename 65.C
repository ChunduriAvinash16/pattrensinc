#include<stdio.h>
#include<conio.h>
/*

   *
  **
 ***
  **
   *
   */
int main()
{

  int n,i,j,k;
  clrscr();
  scanf("%d",&n);
  for(i=n;i>=-n;i--)
  {
    for(j=1;j<=abs(i);j++)
    {
     printf(" ");
    }
    for(k=n;k>=abs(i);k--)
     {
      printf("*");
     }
    printf("\n");
  }
  getch();
  return 0;
}