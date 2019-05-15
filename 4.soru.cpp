#include<stdio.h>
#include<conio.h>
main(){
int i=0,s,s1,s2,s3,s4,s5;
int dizi[5];
printf("6 tane say gir");
for(i=0;i<5;i++)
{
	scanf("%d",&dizi[i]);// dongu ýcýnde dýzý elemanlarý aldýrýyorum.
}
for(i=0;i<5;i++)// dongu ýcýnde kontrol edýyoruz 6 kere donmesý gerekýyo ký kontrol edebýlelým.
{
	if(dizi[i] % 2 ==0)
	{
		printf(" %d=cift ",dizi[i]);
	}
	else
	{
		printf(" %d=tek ",dizi[i]);
	}
}
getch();	
}
