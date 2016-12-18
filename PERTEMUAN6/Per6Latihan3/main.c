#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int batas_akhir;
  int total = 0;
  
  printf("Masukan batas perulangan = ");
  scanf("%i", &batas_akhir);
  
  for (i = 0; i < batas_akhir; i++)
  {
      if (i % 2 == 1) {
         total = total + i;
      }
  }
  printf("TOTAL = %i \n", total);
  system("PAUSE");	
  return 0;
}
