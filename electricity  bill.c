#include<stdio.h>
int main(){
	
	int unit;
	float amt, total_amt, sur_charge;
	
	printf("electricity  bill");
	scanf("%d",&unit);
	
	if(unit<=50){
		amt = unit * 0.50; 
	}
	
	else if (unit<=100){
		amt =unit-50*0.75+25;
	}
	
	else if (unit<=100){
		amt = unit-150*1.20+100;
	}
    else if (unit<=250){
	amt = unit-250*1.50+220;

	}
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

     printf("Electricity Bill = Rs. %.2f", total_amt);

}


   
