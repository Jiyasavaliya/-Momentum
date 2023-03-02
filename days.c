#include<stdio.h>
int main(){
	char days;
	
	printf("enter day");
	scanf("%c",&days);
	
	switch(days){
		
		case 'm' : printf("monday");
		break;
		case 't' : printf("tuesday");
		break;
		case 'w' : printf("wednesday");
		break;
		case 'T' : printf("thursday");
		break;
		case 'f' : printf("firday");
		break;
		case 's' : printf("saturday");
		break;
		case 'S' : printf("sunday");
		break;
	}
	return 0;
}
