
#include<stdio.h>
#include<conio.h>
/*
1
24
135
2468
13579
*/
int main()
{
 int n,i,j,k;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 k=(i%2==0)?1:2;
  for(j=0;j<n;j++)
  {
   if(j<=i)
   {
    printf("%d",k);
    k=k+2;
   }
  }
  printf("\n");
 }
 getch();
 return 0;
}

