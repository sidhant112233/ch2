#include<stdio.h>
#include<conio.h>

void main()
{
	  int unit,bill,sc,total;
	  clrscr();
	  printf("Enter unit : ");
	  scanf("%d",&unit);
	  if(unit<=50)
	  {
		bill=(unit*0.50);
	  }
	  else if(unit<=150)
	  {
		bill=(unit-50)*0.75+25;
	  }
	  else if(unit<=250)
	  {
		bill=(unit-150)*1.25+75;
	  }
	  else
	  {
		bill=(unit-250)*1.5+125;
	  }
		sc=bill*20/100;
		printf("sc=%d\n",sc);
		total=bill+sc;
		printf("total_bill=%d",total);

	  getch();
	  }




