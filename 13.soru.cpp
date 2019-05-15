#include <stdio.h>
#include <conio.h>
#include<math.h>
main( )
{
	
int dizi[10];
dizi[0]=1;
dizi[1]=5;
int i=1;
printf("\n %d ",dizi[0]);
printf("\n %d ",dizi[1]);
	for(i=2;i<=9;i++)// 10 elemanlý oldugu için.
	{
	dizi[i]=dizi[i-1]+pow(2,(i+1));	//1; 5; 13; 29; 61; 
	printf("\n %d ",dizi[i-1]);	
	} 
	
	
	
	
}
