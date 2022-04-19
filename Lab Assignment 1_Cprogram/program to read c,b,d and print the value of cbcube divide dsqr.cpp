/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float c,b,d,r;
    printf("Enter the value of c:");
    scanf("%f",&c);
    printf("Enter the value of b:");
    scanf("%f",&b);
	printf("Enter the value of d:");
    scanf("%f",&d);
    r=(c*b*b*b)/(d*d);
    printf("The result of (cb^3)/d^2 is:%f",r);
    getch();
    return 0;
}