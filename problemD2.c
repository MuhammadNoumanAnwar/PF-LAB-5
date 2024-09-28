#include <stdio.h>
int main()
{
int ass ,mid ,fin;
float per ,aper ,mper ,fper;
printf("Enter your assignment numbers out of 20\n");
scanf("%d" ,&ass);
aper = ( ass * 100 ) / 20 ;
printf("ASSIGNMENT PERCENTAGE %f\n" ,aper);
printf("Enter your mid marks out of 30\n");
scanf("%d" ,&mid);
mper = (mid * 100 ) / 30 ;
printf("MID PERCENTAGE %f\n" ,mper);
printf("Enter your final marks out of 50\n");
scanf("%d" ,&fin);
fper = (fin * 100 ) / 50;
printf("FINAL PERCENTAGE %f\n" ,fper);
per = ((ass + mid + fin) * 100 ) / 100 ;
printf(" OVER ALL PERCENTAGE %.2f\n" ,per);
return 0;
}






