#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jumlah;
  float subtotal;
  float total;
  float diskon;
  
  printf("Msukan Jumlah Beli = ");
  scanf("%i", &jumlah);
  
  subtotal = jumlah * 10000;
  if (jumlah > 5) {
     diskon = subtotal * 0.1;            
  }
  total = subtotal - diskon;
  
  printf("Total Bayar = %.2f \n", total);
  system("PAUSE");	
  return 0;
}
