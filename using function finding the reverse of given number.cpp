#include<stdio.h>
#include<conio.h>
int reverse(int);
int main(){
	int num,rev;
	printf("Enter any number:");
	scanf("%d",&num);
	rev=reverse(num);
	printf("The reverse is %d.",rev);
	return 0;
}
int reverse(int a){
	int rem,rev;
	while(a!=0){
		rem=a%10;
		rev=rev*10 +rem;
		a=a/10;
	}
	return rev;
}