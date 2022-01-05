/* write to Enter any number and checkit is primer or not
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
  void main()
  {
  int no,i,c;
  clrscr();
  printf("\n Enter any number");
  scanf("%d",&no);
  for(i=2,c=0;i<no;i++)
  {

	 if (no%i==0)
	 {
	 c=1;
	 break;
	 }
   }
     if (c==1)
     printf("\n it is a not prime number");

	 else
       printf("\n  prime number");
       getch();
       }
