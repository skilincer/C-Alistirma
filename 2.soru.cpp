#include<stdio.h>
#include<conio.h>
main(){
int sayi;
int fak=1,syc=0,i,j;
printf("Bir sayi giriniz.");
scanf("%d",&sayi);
	if(sayi>=0 && sayi<=5)
	{
	for(i=1;i<=sayi;i++){
	fak*=i;
	}
	printf("sonuc = %d",fak);
	}
	else if(sayi>5 && sayi<10)
	{
	sayi=sayi*sayi;
	printf("sonuc = %d",sayi);
	}
	else if (sayi>10)
	{
	sayi=(sayi/2)-1;
	printf("sonuc = %d",sayi);
	}
	getch();
	}





