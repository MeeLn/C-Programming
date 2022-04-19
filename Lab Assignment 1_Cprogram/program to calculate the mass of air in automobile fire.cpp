/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float P,T,V,m;
    printf("Enter the value of pressure, temperature and volume :");
    scanf("%f %f %f",&P,&T,&V);
    m=(P*V)/(0.37*(T+460));
    printf("The mass of air is: %f",m);
    getch();
    return 0;
}