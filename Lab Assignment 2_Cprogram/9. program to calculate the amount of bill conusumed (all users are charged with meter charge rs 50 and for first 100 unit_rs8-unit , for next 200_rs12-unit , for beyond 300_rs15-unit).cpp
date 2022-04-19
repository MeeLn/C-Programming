/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int unit, sum, total;
    printf("Enter total consumed units:");
    scanf("%d",&unit);
    if(unit<=100)
    {
    	sum = (unit*8);
	}
	else if(unit<=300)
	{
		sum = (100*8)+((unit-100)*12);
	}
	else
	{
		sum = (100*8)+ (200*12)+((unit-300)*15);
	}
	total = sum+50;
	printf("Total amount of electricity bill consumed is Rs%d .",sum);
	printf("\nTotal amount to be paid including meter charge is Rs%d .",total);
    getch();
    return 0;
}