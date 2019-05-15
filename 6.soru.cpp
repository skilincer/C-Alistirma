#include<stdio.h>
#include<conio.h>
main(){
int dizi[]={2,3,1,5,7,5,2,6,8,6};
int eb,ek;
	eb=dizi[0];ek=dizi[0];// degýskenlere dýzýnýn ýlk elemanýný atýyoruz ký karsýlastýrma yapabýlelým.
	for(int i=0;i<9;i++){// dongu dýzý boyutu kadar donuyor.
	
	if (dizi[i]>eb) eb=dizi[i];// en buyuk elemaný buluyoruz.
	if (dizi[i]<ek) ek=dizi[i];//en kucuk elemaný buluyoruz.

	}
printf("en buyuk eleman= %d en kucuk eleman= %d ",eb,ek);
int fark=eb-ek;
printf("\nfark= %d",fark);

}
