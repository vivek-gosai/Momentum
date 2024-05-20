#include<stdio.h>
main(){
	int a;
	
	printf("Enter your number ;");
	scanf("%d",&a);
	
	int b=a%2 ? printf("your num is even") : printf("your num is odd");
}