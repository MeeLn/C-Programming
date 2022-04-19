/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float radius,SA,V;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    SA=4*PI*radius*radius;
    V=(4*PI*radius*radius*radius)/3;
    printf("The surface area and Volume of circle is %.3f and %.3f respectively.",SA,V);
    getch();
    return 0;
}