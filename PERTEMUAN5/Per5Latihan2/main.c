#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jurusan;
  
  printf("Masukan jurusan = ");
  scanf("%i", &jurusan);
  
  switch(jurusan)
  {
      case 1:
           printf("Teknik Informatika \n");
           break;
      
      case 2:
           printf("Sistem Informasi \n");
           break;
           
      default:
              printf("Jurusan tidak ditemukan \n");
  }
  system("PAUSE");	
  return 0;
}
