#include<stdio.h>
#include<conio.h>
int main()
{

int n,i,j,k,x;
clrscr();
scanf("%d",&n);
for(i=n;i>0;i--)
 {
   k=(i%2!=0)?i+1:i;
    for(j=k;j<n;j++);
      printf(" ");
    for(x=0;x<k;x++)
      printf("*");
   }
    printf("\n");
 }
 getch();
 return 0;
}