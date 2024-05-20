#include<stdio.h>
int main(){
	char choice;
	printf("Enter your choice :");
	scanf("%c",&choice);
	
	if(choice>='A' && choice<='Z'){
			printf("This is alplabate");
	}else if(choice>='a'&& choice<='z'){
			printf("This is alplabate");
	}else if(choice>='0'&& choice<='9'){
			printf("This is digit");
	}else{
			printf("This is special charactor");
	}


return 0;
}