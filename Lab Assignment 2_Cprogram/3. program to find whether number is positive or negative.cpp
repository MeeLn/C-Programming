/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    if(number>0)
    {
    	printf("The given number(%d) is positive.",number);
	}
	else
	{
		printf("The given number(%d) is negative.",number);
	}
    getch();
    return 0;
}