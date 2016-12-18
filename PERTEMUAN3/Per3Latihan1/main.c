#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const float phi = 3.14;
  int jari;
  float luas;
  
  // input jari dengan 10
  printf("Masukan jari-jari = ");
  scanf("%i", &jari);
  
  // hitung luas dengan phi
  luas = phi * jari * jari;
  
  //output luas
  printf("Luas lingkaran dengan jari-jari %i adalah %.2f \n", jari, luas);
  
  system("PAUSE");	
  return 0;
}
