/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("Enter any four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    {
    	printf("%d is maximum",a);
	}
	else if(b>c&&b>d)
	{
		printf("%d is maximum",b);
	}
	else if(c>d)
	{
		printf("%d is maximum",c);
	}
	else
	{
		printf("%d is maximum",d);
	}
    getch();
    return 0;
}