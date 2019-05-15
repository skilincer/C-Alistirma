#include<stdio.h>
#include<conio.h>
#include<math.h>
	
void goster(float secim)
{
	
	printf("%f",secim);
}

float top_harcama(float km,float yakit_ucreti)
{
	float sonuc=km/yakit_ucreti;
	return sonuc;	
}

float toplam_tuketim(float yakit_ucreti,float tuketilen_yakit)
{
	float sonuc=yakit_ucreti*tuketilen_yakit;
	return sonuc;

}
 main(){
	float secim,yakit_ucreti,km,tuketilen_yakit;
	printf("Yakit ucretini giriniz :");
	scanf("%f",&yakit_ucreti);
	printf("Gidilen Km giriniz :");
	scanf("%f",&km);
	printf("Tuketilen Yakit bilgisini giriniz :");
	scanf("%f",&tuketilen_yakit);
	printf("Toplam harcama için 1'e\nToplam tüketim için 2'e basýnýz.\n");
	
	scanf("%f",&secim);
	
	if(secim==1)
	{
		goster(top_harcama(km,yakit_ucreti));
	}
	else if(secim==2)
	{
		goster(toplam_tuketim(yakit_ucreti,tuketilen_yakit));
	}
	
	return 0;


}
