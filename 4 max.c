#include<stdio.h>
main(){
	
	int a,b,c,d;
	
	printf("Enter value A:");
	scanf("%d",&a);
	
	printf("Enter value B:");
	scanf("%d",&b);
	
	printf("Enter value C:");
	scanf("%d",&c);
	
	printf("Enter value D:");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is max");
			}
			else{
				printf("D is max");
			}
		}
		else{
			if(c>d){
				printf("C is max");
			}
			else{
				("D is max");
			}
		}
	}

	
       else{
   	if(b>c){
   		if(b>d){
   			printf("B is max");
		   }
		   else{
		   	printf("D is max");
		   }
	   }
	   else{
	   	if(c>d){
	   		printf("C is max");
		   }
		   else{
		   	printf("D is max");
		   }
	   }
   }


	
	   
   }
