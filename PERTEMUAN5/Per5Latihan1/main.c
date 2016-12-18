#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int umur;
  
  printf("Maukan umur = ");
  scanf("%i", &umur);
  
  if (umur >= 17) {
     printf("Anda layak mendapatkan KTP \n");         
  } else {
     printf("Anda Belum layak mendapatkan KTP \n");
  }
  
  system("PAUSE");	
  return 0;
}
