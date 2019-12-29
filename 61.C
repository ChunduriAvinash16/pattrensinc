#include<stdio.h>
#include<conio.h>
/*
oxo
xxx
oxo*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 n=(n%2==0)?n+1:n;
 for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
      (i==n/2 || j==n/2)?printf("*"):printf("o");
    }
    printf("\n");
 }
 getch();
 return 0;
}