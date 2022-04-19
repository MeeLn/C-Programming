#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int n,flag=1;
	char strg[50];
	printf("Enter string:");
	scanf("%s",&strg);
	printf("the string is: %s",strg);
	n = strlen(strg);
	for(int i=0;i<n;i++){
		if(strg[i]!=strg[n-1]){
		flag=0;	
		}
	}
	if(flag=1){
	    printf("%s string is palindrome.",strg);	
	}
	else{
		printf("%s string is not palindrome.",strg);
	}
}