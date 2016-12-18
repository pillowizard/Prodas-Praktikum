#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
  int menu;
  int stok_ayam = 50;
  int stok_bebek = 50;
  int jml_ayam;
  int jml_bebek;
  int total;
  int status;
  char nama[31];
  char alamat[51];
  
  
  do
  {
      system("cls");
      printf("Menu Pilihan \n");
      printf("----------------------\n");
      printf("1. Data Pembeli\n");
      printf("2. Stok Ayam dan Bebek\n");
      printf("3. Pemesanan\n");
      printf("4. Cetak Faktur\n");
      printf("5. Keluar\n");
      printf("----------------------\n");
      printf("Masukkan Menu = ");
      scanf("%i", &menu);
      
      switch(menu)
      {
            case 1:
                 system("cls");
                 printf("Masukkan Nama = ");
                 fflush(stdin); gets(nama);
                 printf("Masukkan Alamat = ");
                 fflush(stdin); gets(alamat);
                 
                 printf("Tekan sembarang tombol untuk kembali");
                 getch();
                 break;                  

            case 2:
                 system("cls");
                 printf("Stok Ayam = %i \n", stok_ayam);
                 printf("Stok Bebek = %i \n", stok_bebek);
                 
                 printf("Tekan sembarang tombol untuk kembali");
                 getch();
                 break;                        

            case 3:
                 do
                 {
                         system("cls");
                         printf("Jumlah Ayam = ");
                         scanf("%i", &jml_ayam);
                         printf("Jumlah Bebek = ");
                         scanf("%i", &jml_bebek);
                         
                         if (jml_ayam > stok_ayam || jml_bebek > stok_bebek) {
                               printf("Stok ayam atau stok bebek tidak mencukupi \n");
                               getch();          
                         }
                                               
                 } while (jml_ayam > stok_ayam || jml_bebek > stok_bebek);
                 
                 printf("Status:\n");
                 printf("1. Makan di tempat\n");
                 printf("2. Di bawa pulang\n");
                 printf("Masukkan Status = ");
                 scanf("%i", &status);
                 
                 printf("Tekan sembarang tombol untuk kembali");
                 getch();
                 break;                                   

            case 4:
                 system("cls");
                 printf("Nama = %s \n", nama);
                 printf("Alamat = %s \n", alamat);
                 printf("Ayam = %i \n", jml_ayam);
                 printf("Bebek = %i \n", jml_bebek);
                 
                 stok_ayam = stok_ayam - jml_ayam;
                 stok_bebek = stok_bebek - jml_bebek;
                 
                 total = (jml_ayam * 10000) + (jml_bebek * 20000);
                 
                 if (jml_ayam >= 10 || jml_bebek >= 5) {
                       total = total - 20000;                    
                 }
                 
                 if (status == 1) {
                       total = total - 10000;        
                 }
                 
                 printf("TOTAL = %i \n", total);
                 
                 printf("Tekan sembarang tombol untuk kembali");
                 getch();
                 break;                                   

            case 5:
                 break;  

            default:
                 printf("Menu tidak terdaftar");
                 getch();           
                        
      }
  } while (menu != 5);
  
  return 0;
}
