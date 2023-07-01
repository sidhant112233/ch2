#include<stdio.h>
#include<conio.h>
void main()
{
	  int a,b,c,d;
	  clrscr();
	  printf("Enter value of a :");
	  scanf("%d",&a);
	  printf("Enter value of b :");
	  scanf("%d",&b);
	  printf("Enter value of c :");
	  scanf("%d",&c);
	  printf("Enter value of d :");
	  scanf("%d",&d);
	  if(a>b)
	  {
		if(a>c)
		{
		  if(a>d)
		  {
		    printf("a is max");

		  }
		  else
		  {
		    printf("d is max");
		  }
		}
		else
		{
		   if(c>d)
		   {
		      printf("c is max");
		   }
		   else
		   {
		      printf("d is max");
		   }
		}
	  }
	  else
	  {
	      if(b>c)
	      {
		 if(b>d)
		 {
			printf("b is max");
		 }
		 else
		 {
			printf("d is max");
		 }
	      }
	      else
	      {
		if(c>d)
		{
			printf("c is max");
		}
		else
		{
			printf("d is max");
		}
	      }
	  }
	  getch();
}
