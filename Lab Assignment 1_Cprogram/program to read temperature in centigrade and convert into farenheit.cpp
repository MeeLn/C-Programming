/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float C , F;
    printf("Enter the value of temperature in centigrade:");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("The temperdature of %.1f degree centigrade in Farenheit is: %.1f ",C,F);
    getch();
    return 0;
}