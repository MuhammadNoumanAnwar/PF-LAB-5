#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d" ,&age);
	if(age<=13 && age>=0){
		printf("chlid");
	}
	else if(age>13 && age<=19){
		printf("teenager");
	}
	else if(age>=20 && age<=60){
		printf("adult");
	}
	else if(age>=61){
		printf("senior");
	}
	else(printf("invalid age entered"));
	return 0;
}
