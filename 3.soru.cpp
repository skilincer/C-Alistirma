#include<stdio.h>
#include<conio.h>
main(){
int sayi,sayi2,top=0;
printf("2 deger giriniz.");
scanf("%d %d", &sayi,&sayi2);
int i=sayi;
for (i;i<=sayi2;i++)
{
	top=i+top;
}
printf("toplam= %d",top);
}

