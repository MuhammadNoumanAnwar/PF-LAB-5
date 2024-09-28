#include <stdio.h>
int main(){
	int num;
	printf("Enter a number : \n");
	scanf("%d" ,&num);
	if(num%3==0 && num%5==0){
		printf("the number is divisible by both 3 and 5");
	}
	else if(num%3==0 && num%5!=0){
		printf("the number is only divisible by 3");
	}
	else if(num%5==0 && num%3!=0){
		printf("the number is only divisible by 5");
	}
	else {
		printf("the number is not divisible by both 3 and 5");
	}
	return 0;
}
