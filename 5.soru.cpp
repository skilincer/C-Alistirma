#include<stdio.h>
#include<conio.h>
main(){
int x, *isaret;

 	x = 10;
	isaret = &x;
	printf("x in degeri = %d\n",x); // bunlar bilgilendirme amaçlı
	printf("x in adresi = %x\n",isaret);	// pointer mantıgı burdan incelenebilir.
	printf("x in değeri = %d\n",*isaret);
	printf("x in adresi = %x\n",&x);
	
	
	int dizi[]={2,3,1,5,7,5,2,6,8,6};
	for(int i=0;i<10;i++)
	{
	printf("dizinin %d.adresi = %x\n",i,&dizi[i]);
	}
	
	
	
	
		
}

