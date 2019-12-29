#include<stdio.h>
#include<conio.h>
/*
oxxx
xoxx
xxox
xxxo*/
int main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
	(i==j)?printf("o"):printf("x");
printf("\n");
}
getch();
return 0;
}