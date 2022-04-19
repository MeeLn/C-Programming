/* Name: Milan Raut
   Roll no.: 201420
   Faculty:BEIT(morning) 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e,sum,percentage;
    printf("Enter marks obtained by student in five subjects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage= (sum/500)*100;
    printf("The obtained percentage by student is %.2f .",percentage);
    if(a>=40&&b>=40&&c>=40&&d>=40&&e>=40)
    {
    	if(percentage>=80)
        {
    	printf("\nStudent passed the exam getting distinction .");
     	}
	    else if(percentage<80 && percentage>=60)
        {
    	printf("\nStudent passed the exam in first division .");
	    }
	    else if(percentage<60 && percentage>=50)
        {
    	printf("\nStudent passed the exam in second division .");
	    }
	    else if(percentage<50 && percentage>=40)
        {
    	printf("\nStudent passed the exam in third division .");
	    }
	    else
	    {
	    	printf("\nStudent failed the exam .");
		}
	}
	else
    {
    	printf("\nStudent failed the exam .");
	}
    getch();
    return 0;
}