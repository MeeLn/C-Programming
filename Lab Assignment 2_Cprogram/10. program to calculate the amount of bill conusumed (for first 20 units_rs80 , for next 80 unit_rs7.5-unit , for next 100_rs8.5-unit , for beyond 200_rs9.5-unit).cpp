/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int unit, sum; 
    float total;
    printf("Enter total consumed units:");
    scanf("%d",&unit);
    if(unit<=20)
	{
		sum = 80;
	}	
	else if(unit<=100)
	{
		sum =80+((unit-20)*7.5);
	}
	else if(unit<=200)
	{
		sum=80+(80*7.5)+((unit-100)*8.5);
	}
	else
	{
		sum = 80+ (80*7.5)+(100*8.5)+((unit-200)*9.5);
	}
	total = 1.15*sum;
	printf("Total amount of electricity bill consumed is Rs%d .",sum);
	printf("\nTotal amount to be paid including tax is Rs%.2f .",total);
    getch();
    return 0;
}