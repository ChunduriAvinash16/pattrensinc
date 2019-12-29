#include<stdio.h>
#include<conio.h>
/*
xxx
xox
xxx*/
int main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
n=(n%2==0)?n+1:n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
(i==j && i+j==n-1)?printf("o"):printf("x");
printf("\n");
}
getch();
return 0;
}