#include<stdio.h>
#include<conio.h>
main(){
int i=0,s,s1,s2,s3,s4,s5;
int dizi[5];
printf("6 tane say gir");
for(i=0;i<5;i++)
{
	scanf("%d",&dizi[i]);// dongu �c�nde d�z� elemanlar� ald�r�yorum.
}
for(i=0;i<5;i++)// dongu �c�nde kontrol ed�yoruz 6 kere donmes� gerek�yo k� kontrol edeb�lel�m.
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
