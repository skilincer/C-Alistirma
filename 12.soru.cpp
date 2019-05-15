#include <stdio.h>
#include <conio.h>
int a[10]={3,1,0,0,3,3,1,3,0,0};

int i,puan=0;
main( )
{
int galibiyet=0,beraberlik=0;
for (i=0;i<10;i++)
{
if (a[i]==3)
{
puan=puan+3;
 galibiyet++;	
} 
 if (a[i]==1)
 {
 	 puan=puan+1;
	  beraberlik++;
 }
}
if (puan>=12) printf ("Takim %d puan ile kumede kalmistir!",puan);
 else printf("Takim %d puan ile kume dusmustur!",puan);
 
 printf ("\nTakim %d adet galibiyeti vardir.  ",galibiyet);
 printf ("\nTakim %d adet beraberlik vardir.  ",beraberlik);
getch( );
}

