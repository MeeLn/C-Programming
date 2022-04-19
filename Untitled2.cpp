#include<stdio.h>
#include<conio.h>
int main()
{
    float p, t, r, I;
    printf("Enter the principal , time, and rate:");
    scanf("%f%f%f", &p, &t, &r);
    I = (p * t * r) / 100;
    printf("Interest = %f", I);
    getch();
    return 0;
}