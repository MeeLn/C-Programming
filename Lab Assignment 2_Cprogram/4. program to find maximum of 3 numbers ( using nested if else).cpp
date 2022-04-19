/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
    	if(a>c)
    	{
    		printf("%d is maximum",a);
		}
		else
		{
			printf("%d is maximum",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is maximum",b);
		}
		else
		{
			printf("%d is maximum",c);
		}
	}
    getch();
    return 0;
}