#include<stdio.h>

	#include<stdio.h>
 main(){
    int a,b,c,d,e,tot,per;
    printf("Enter physics Marks :-");
    scanf("%d",&a);
    printf("Enter chemistry Marks :-");
    scanf("%d",&b);
    printf("Enter biology Marks :-");
    scanf("%d",&c);
    printf("Enter mathematics Marks :-");
    scanf("%d",&d);
    printf("Enter computer Marks :-");
    scanf("%d",&e);
    
	tot=a+b+c+d+e;
	per=tot/5;
    
    printf("your persentile is :%d\n",per);
    
    if (per>=90)
    {
        printf("Your grade is A");
    }else if (per>=80){
        printf("Your grade is B");
	}else if (per>=70){
        printf("Your grade is C");
    }else if (per>=60){
        printf("Your grade is D");
    }else if (per>=50){
        printf("Your grade is E");
    }else if(per>=40){
    	printf("Your grade is E");
	}else{
        printf("You are failed try next year");
    }
    
    return 0;
}
