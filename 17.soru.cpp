#include "stdio.h"
#include "stdlib.h"

int main()
{
  int boyut=0;
  printf("Dizi boyutunu girin:");
  scanf("%d",&boyut);
  int* dizi;
  dizi=(int *)malloc((boyut*sizeof(int)));
  
  int i=0;
  for(i=0;i<boyut;i++)
  {
	printf("%d.elemani giriniz: ",i+1);
   	scanf("%d",&dizi[i]);
  
                      
  }
  for(int i=0;i<boyut;i++)
  printf("%d. eleman= %d\n",i+1,dizi[i]);
  return 0;
}
