#include<stdio.h>
#include<conio.h>
int main()
{

int n,i,j,k;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
 {
   k=(i%2!=0)?i+1:i;
   for(j=0;j<k;j++)
    {
      printf("*");
    }
    printf("\n");
 }
 getch();
 return 0;
}

