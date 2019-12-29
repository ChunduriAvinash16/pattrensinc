#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n*2-1;i++)
{
 for(j=0;j<n*2-1;j++)
 {   if(i<=n)
     {
       if(i+j==n-1 || i-j==1-n)
     printf("*");

       else
       printf(" ");
     }
     else if(i>n)
     {
      if(i-j==n-1 || i+j==(n-1)*(n-1))
       {
	printf("*");
       }
       else
       {
	printf(" ");
       }
     }

 }
 printf("\n");
}
getch();
return 0;
}