#include<stdio.h>
#include<conio.h>
main(){
int dizi[]={2,3,1,5,7,5,2,6,8,6};
int eb,ek;
	eb=dizi[0];ek=dizi[0];// deg�skenlere d�z�n�n �lk eleman�n� at�yoruz k� kars�last�rma yapab�lel�m.
	for(int i=0;i<9;i++){// dongu d�z� boyutu kadar donuyor.
	
	if (dizi[i]>eb) eb=dizi[i];// en buyuk eleman� buluyoruz.
	if (dizi[i]<ek) ek=dizi[i];//en kucuk eleman� buluyoruz.

	}
printf("en buyuk eleman= %d en kucuk eleman= %d ",eb,ek);
int fark=eb-ek;
printf("\nfark= %d",fark);

}
