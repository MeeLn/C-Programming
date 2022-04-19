/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d= (b * b )- (4 * a * c);

    if (d == 0) {
        r1 = r2 = (-b)/ (2 * a);
        printf("root1 = root2 = %d", r1);
    }
    
    else {
        printf("roots are not real and equal");
    }
    getch();
    return 0;
}