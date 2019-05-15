#include <stdio.h>
#include <conio.h>


main( )
{
int sayi;
scanf("%d",&sayi);
int yuzler,onlar,birler;

yuzler = sayi/100;
sayi = sayi%100;
onlar =sayi/10;
birler  = sayi %10;
        
printf("\nBasamaklar Toplami = %d",yuzler+onlar+birler);
printf("\nBasamaklar Carpimi = %d",yuzler*onlar*birler);
}
