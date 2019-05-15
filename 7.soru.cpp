	#include<stdio.h>
	#include<conio.h>
	main()
	{

	 char ktr[15];
      int i,sayac = 0;
      printf("\nBir seyler yazin :");
    gets(ktr);
      for(i=0;i<=ktr[i];i++)
      if( ktr[i]==' ')
	  {
      ktr[i]='*';
	  }	
	printf("%s",ktr);
	 

     
     getch();
	}
	
	
