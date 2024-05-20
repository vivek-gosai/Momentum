#include<stdio.h>
main(){
	int a,b,c,d;
	
	printf("Enter first value :");
	scanf("%d",&a);
	printf("Enter second value :");
	scanf("%d",&b);
	printf("Enter third value :");
	scanf("%d",&c);
	printf("Enter fourth value :");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
		}
		else{
		  	printf("d is max");
		}
		}else{
			printf("b is max");
		}
	}
	else{
		if(b>c){
			if(b>c){
				if(b>d){
					printf("b is max");
				}
			else{
				printf("d is max");
			}
			}else{
				printf("c is max");
			}
		}	
		else{
		 if(c>d){
		 	printf("c is max");
		}	
		 else{
		 	printf("d is max");
		}
		}
	}
}
	
	