#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jumlah;
  float subtotal;
  float cashback;
  float total;
  
  printf("Masukan jumlah = ");
  scanf("%i", &jumlah);
  
  subtotal = jumlah * 5000;
  if (jumlah > 10) {
      cashback = 20000;   
  }
  total = subtotal - cashback;
  
  printf("Harga yang harus dibayar = %.2f \n", total);
  system("PAUSE");	
  return 0;
}
