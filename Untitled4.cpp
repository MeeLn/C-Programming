#include<stdio.h>
#include<conio.h>
int main(){
	int n,a[20];
	printf("Enter no:");
	scanf("%d",&n);
	printf("Enter array element:");
	for(int i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}
	printf("arrey elements are:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nthe sorted arrey elements are:\n");
	for(int i=n-1;i>=0;i--){
		printf("%d\t",a[i]);
	}
	
	getch();
	return 0;
}