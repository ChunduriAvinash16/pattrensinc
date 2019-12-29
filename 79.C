#include<stdio.h>
#include<conio.h>
/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15*/
int main()
{
int n,j,i,k=1;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 k=i+1;
  for(j=0;j<n;j++)
    {
	 if(j<=i)
	 {
	  if(j==0)
	  printf("%d ",k);
	  else
	  {
	  k=k+(n-j);
	  printf(" %d",k);
	  }
	 }
    }
	 printf("\n");
  }
  getch();
  return 0;
 }
