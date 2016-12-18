#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int alas;
  int tinggi;
  float luas_tanah;
  char no_identitas[20];
  char nama[30];
  char alamat[50];
  
  printf("Masukan Alas = ");
  scanf("%i", &alas);
  
  printf("Masukan Tinggi = ");
  scanf("%i", &tinggi);
  
  printf("Masukan no identitas = ");
  fflush(stdin);
  gets(no_identitas);
  
  printf("Masukan nama = ");
  fflush(stdin);
  gets(nama);
  
  printf("Masukan alamat = ");
  fflush(stdin);
  gets(alamat);
  
  luas_tanah = 0.5 * alas * tinggi;
  
  printf("\nLuas Tanah = %.2f", luas_tanah);
  printf("\nNo identitas = %s", no_identitas);
  printf("\nNama = %s", nama);
  printf("\nAlamat = %s \n", alamat);

  system("PAUSE");	
  return 0;
}
