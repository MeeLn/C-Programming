/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=1,n,es=0,os=0;
    printf("enter no. of terms:");
    scanf("%d",&n);
    while(i<=n)
    {
    	if(i%2==0){es=es+i;i++;}
		else{os=os+i;i++;}
	}
	printf("sum of even no:%d and sum of odd no:%d",es,os);
    getch();
    return 0;
}