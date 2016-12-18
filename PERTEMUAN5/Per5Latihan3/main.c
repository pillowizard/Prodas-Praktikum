#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int lampu;
  
  printf("Masukan lampu = ");
  scanf("%i", &lampu);
  
  switch (lampu)
  {
      case 1:
           printf("Warna Merah \n"); 
           break;
      
      case 2:
           printf("Warna Kuning \n"); 
           break;
           
      case 3:
           printf("Warna Hijau \n"); 
           break;
           
     default: 
           printf("Warna tidak ditemukan \n");     
  }
  system("PAUSE");	
  return 0;
}
