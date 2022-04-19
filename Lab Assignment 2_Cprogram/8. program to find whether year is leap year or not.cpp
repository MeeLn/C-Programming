/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    if(year%4==0)
    {
    	if(year%100==0)
    	{
    		if(year%400==0)
    		{
    			printf("The given year (%d) is a leap year .",year);
			}
			else
			{
				printf("The given year (%d) is a not leap year .",year);
			}
		}
		else
		{
			printf("The given year (%d) is a leap year .",year);
		}
	}
	else
	{
		printf("The given year (%d) is a not leap year .",year);
	}
    getch();
    return 0;
}