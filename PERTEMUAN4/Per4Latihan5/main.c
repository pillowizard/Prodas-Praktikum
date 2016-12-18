#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jumlah_beli;
  int bayar;
  char nama[20];
  char alamat[50];
  char nomor_hp[20];
  
  printf("Masukan jumlah beli = ");
  scanf("%i", &jumlah_beli);
  
  printf("Masukan nama        = ");
  fflush(stdin);
  gets(nama);
  
  printf("Masukan alamat      = ");
  fflush(stdin);
  gets(alamat);
  
  printf("Masukan nomor hp    = ");
  fflush(stdin);
  gets(nomor_hp);
  
  bayar = 10000 * jumlah_beli;
  
  printf("\nJumlah Bayar = %i", bayar);
  printf("\nNama         = %s", nama);
  printf("\nAlamat       = %s", alamat);
  printf("\nNomor HP     = %s \n", nomor_hp);
  
  system("PAUSE");	
  return 0;
}
