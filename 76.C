#include<stdio.h>
#include<conio.h>
/*
1
1 2
3 5 8
13 21 34 55*/
int main()
{
 int n,i,j,fib1=0,fib2=1,fib3=fib1+fib2;
 clrscr();
 scanf("%d",&n);
// printf("%d",fib1);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     if(j<=i)
     {
     printf(" %d",fib3);
      fib3=fib1+fib2;
      fib1=fib2;
      fib2=fib3;
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