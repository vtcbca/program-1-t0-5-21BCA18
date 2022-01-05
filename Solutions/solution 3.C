
/* write a program to enter any number and check ia palindrom number or not
date:27/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
 {
 int no,c,s=0,r;
 clrscr();
 printf("\n Enter any number");
 scanf("%d",&no);
 c=no;
 while(no>0)
 {
  r=no%10;
  s=r+s*10;
  no=no/10;
  }
  if (c==s)
    printf("\n it is a pelindrome number");
    else
     printf("\n it is not pelindrome number");
     getch();
     }