#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nim[9];
  char nama[20];
  char kelas [9];
  char jurusan [19];
  char fakultas [25];
  
  printf("Masukan nim      = ");
  fflush(stdin);
  gets(nim);
  
  printf("Masukan nama     = ");
  fflush(stdin);
  gets(nama);
  
  printf("Masukan kelas    = ");
  fflush(stdin);
  gets(kelas);
  
  printf("Masukan jurusan  = ");
  fflush(stdin);
  gets(jurusan);
  
  printf("Masukan fakultas = ");
  fflush(stdin);
  gets(fakultas);
  
  printf("\nNim      = %s \n", nim);
  printf("Nama     = %s \n", nama);
  printf("Kelas    = %s \n", kelas);
  printf("Jurusan  = %s \n", jurusan);
  printf("Fakultas = %s \n", fakultas);
  
  system("PAUSE");	
  return 0;
}
