/* write a program to Enter any number print any sum of digit
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
 void main()
 {
   int a,b=0,c;
   clrscr();
   printf("\n Enter any number");
   scanf("%d",&a);
   while(a>0)
   {
	 c=a%10;
	 b=b+c;
	 a=a/10;
    }
       printf("\n sum of digites:%d",b);
	 getch();
	 }
