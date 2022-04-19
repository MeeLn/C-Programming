/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    	printf("%d is maximum",a);
	}
	else
	{
		printf("%d is maximum",b);
	}
    getch();
    return 0;
}