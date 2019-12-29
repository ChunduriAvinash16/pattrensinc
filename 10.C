#include<stdio.h>
#include<conio.h>
/*
1
12
123
12345
*/
int main()
{
 int n,i,j;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    (i>=j)?printf("%d",j+1):printf(" ");
    printf("\n");
 }
 getch();
 return 0;
 }