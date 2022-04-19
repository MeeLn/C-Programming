/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
    float sumi=0;
    printf("enter no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=(n*2);i=i+(2*sum))
    {
    	sumi=sumi+((float)(i*i)/(i*i*i)); sum++;
	}
	printf("sum=%f",sumi);
    getch();
    return 0;
}