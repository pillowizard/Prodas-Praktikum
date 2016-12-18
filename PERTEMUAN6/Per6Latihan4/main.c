#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int menu;
  
  do
  {
      system("cls");
      printf("Menu Pilihan \n");
      printf("------------ \n");
      printf("1. Luas Persegi \n");
      printf("2. Luas Lingkaran \n");
      printf("3. Luas Segitiga \n");
      printf("4. Keluar \n");
      printf("-------------- \n");
      printf("Masukan Menu Pulihan = ");
      scanf("%i", &menu);
      
      switch(menu)
      {
                  case 1:
                       system("cls");
                       printf("Luas Persegi \n");            
                       getch();
                       break;
                       
                  case 2:
                       system("cls");
                       printf("Luas Lingkaran \n");            
                       getch();
                       break;
                       
                  case 3:
                       system("cls");
                       printf("Luas Segitiga \n");            
                       getch();
                       break;
                       
                  case 4:
                       break;
                       
                  default:
                       printf("Menu Tidak Tersedia \n");            
                       getch();
                          
      }
  } while (menu != 4);
	
  return 0;
}
