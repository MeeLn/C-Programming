/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include <stdio.h>
#include <conio.h>
#define PI 3.14
int main()
{
   float radius ,area, circumf;
   printf("Enter radius of circle: ");
   scanf("%f",&radius);
   area = PI * radius * radius;
   printf("Area of circle is: %.3f",area);
   circumf = 2 * PI * radius;
   printf("\nCircumference of circle is: %.3f",circumf);
   getch();
   return(0);
}