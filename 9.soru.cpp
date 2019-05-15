	#include<stdio.h>
	#include<conio.h>
	main()
	{char ktr[20];
    int i,sayac = 0;
    printf("\nBir seyler yazin :");
    gets(ktr);
	for(i=0;ktr[i];i++)
      if( ktr[i]=='a' )	sayac++;
      printf("yazilanlarin icinde %d tane a harfi var, uzunlugu =%d",sayac,i);
	
	
	
	
	}
