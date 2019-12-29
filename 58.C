#include<stdio.h>
#include<conio.h>
/*
xooox
oxoxo
ooxoo
oxoxo
xooox
*/
int main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
(i==j || i+j==n-1)?printf("x"):printf("o");
printf("\n");
}
getch();
return 0;
}
