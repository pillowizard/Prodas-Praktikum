#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 // studi kasus luas ssegitiga
 
 // deklarasi variable
 int alas;
 int tinggi;
 float luas;
 
 //input alas dan tinggi dengan scanf
 printf("Masukan alas = ");
 scanf("%i", &alas);
 printf("Masukan tinggi = ");
 scanf("%i", &tinggi);
 
 //hitung luas segitiga
 luas = 0.5 * alas * tinggi;
 
 //output luas
 printf("Luas Segitiga = 1/2 * %i * %i = %.2f \n", alas, tinggi, luas); 
 
  system("PAUSE");	
  return 0;
}
