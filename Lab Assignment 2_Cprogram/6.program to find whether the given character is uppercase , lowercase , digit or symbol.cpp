/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char character;
    printf("Enter any character:");
    scanf("%c",&character);
    if(character>=65 && character<=91)
    {
    	printf("The given character (%c) is in Uppercase.",character);
	}
	else if(character>=97 && character<=123)
	{
		printf("The given character (%c) is in Lowercase.",character);
	}
	else if(character>=48 && character<=58)
	{
		printf("The given character (%c) is a digit.",character);
	}
	else
	{
		printf("The given character (%c) is a symbol.",character);
	}
    getch();
    return 0;
}