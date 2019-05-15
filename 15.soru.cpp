#include <stdio.h>
#include <conio.h>
#include<math.h>
main( )
{
	
int dizi[5];

	for(int i=0;i<=5;i++)
	{	
	printf("%d. elamani giriniz: ",i+1);
	scanf("%d",&dizi[i]);// köþeli parantez kullanmazsak donguden sonraký ýlk satýr calýsýr sonraký satýr dönguye gýrmez.
	}
	int syc=5;
	for(int j=0;j<=5;j++)
	{
		printf("%d   %d   %d\n",dizi[j],dizi[syc],dizi[j]+dizi[syc]);
		syc--;
	}
	
	


}
