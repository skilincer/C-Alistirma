#include<stdio.h>
#include<conio.h>
	main()
	{
char ktr[20];
    int i,sayac = 0;
    printf("\nBir seyler yazin :");
    gets(ktr);
	for(i=0;ktr[i];i++)
      if( ktr[i]=='e' )
	  {
	  	sayac++;
	  	printf("\nkelimenin %d. sirasinda e harfi var",i+1);
      }	
      printf("yazilanlarin icinde %d tane e harfi var",sayac);
	
	
	}
