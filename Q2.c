#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number :\n");
	scanf("%d" ,&num);
	if(num%2==0){
		printf("the number is even\n");
	}
	else if(num%2==1){
		printf("the number is odd\n");
	}
	if(num<0){
		printf("the number is negative\n");
	}
	else if(num>0){
		printf("the number is positve\n");
	}
	else {printf("the mumber is zero\n");
	}
	return 0;
}
