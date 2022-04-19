/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,diff,product;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    sum = a + b;
    diff = a - b;
    product = a*b;
    printf("Their sum is:%d , their difference is:%d and their product is:%d",sum,diff,product);
    getch();
    return 0;
}