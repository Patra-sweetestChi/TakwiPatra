#include <stdio.h>
int main(){
	float totalPrice, finalAmount, discount;
		
		printf("Enter total price of items: ");
			scanf("%f",&totalPrice);
				
				if(totalPrice > 10000){
					discount = totalPrice*0.10; //10% discount
					finalAmount = totalPrice-discount;
				} else {
					finalAmount = totalPrice; //no discount
				}
				printf("Final amount to pay: %.2f\n", finalAmount);
				
				return 0;
}