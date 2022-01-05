/* write to program enter any number and print  it in revers number
date:31/12/2021*/
#include<stdio.h>
#include<conio.h>
  void main()
  {
    int a,b,c=0;
    clrscr();
    printf("\ Enter any number");
    scanf("%d",&a);
    a=c;
     while(a>0)
     {
	b=a%10;
	c=c*10+b;
	a=a/10;
     }
      printf("\n revers number is %d",c);
      getch();
  }
