/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float p, t, r, I,TA;
    printf("Enter the principal , time, and rate:");
    scanf("%f%f%f", &p, &t, &r);
    I = (p * t * r) / 100;
    TA=p+I;
    printf("Interest = %f", I);
    printf("\nTotal Amount=%f",TA);
    getch();
    return 0;
}