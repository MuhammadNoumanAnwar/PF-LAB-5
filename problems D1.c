#include <stdio.h>
int main()
{
int num1;
int num2;
int num3;
printf("Enter num 1 , num 2 and num 3 \n");
scanf("%d%d%d" ,&num1,&num2,&num3);
if (num1 > num2 && num1 > num3){
printf("Number one is greater");
}
else if(num2 > num1 && num2 > num3)
{
printf("Number two is greater");
}
else if(num3 > num2 && num3 > num1)
{
printf("Number three is greater");
}
return 0;
}
