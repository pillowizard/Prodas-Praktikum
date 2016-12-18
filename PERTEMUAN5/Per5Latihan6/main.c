#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int menu;
  int sisi;
  int jari;
  int luas_persegi;
  float luas_lingkaran;
  
  printf("MENU UTAMA \n");
  printf("========== \n");
  printf("1. Hitung Luas Persegi \n");
  printf("2. Hitung Luas Lingkaran \n");
  printf("Masukan Menu : ");
  scanf("%i", &menu);
  
  switch (menu)
  {
      case 1:
           system("cls");
           printf("Masukan Sisi = ");
           scanf("%i", &sisi);
           
           luas_persegi = sisi * sisi;
           
           printf("Luas Persegi = %i \n", luas_persegi);
           break;
           
      case 2:
           system("cls");
           printf("Masukan Jari-jari = ");
           scanf("%i", &jari);
           
           luas_lingkaran = 3.14 * jari * jari;
           
           printf("Luas Lingkaran = %.2f \n", luas_lingkaran);
           break;
           
      default:
           printf("Menu tidak tersedia");
  }
  system("PAUSE");	
  return 0;
}
