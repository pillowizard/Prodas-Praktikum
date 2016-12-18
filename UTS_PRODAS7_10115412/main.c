#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int menu;
  char nama[31];
  char status;
  int jumlah;
  int total;
  int jumlahbaju;
  int menumakanan;
  int menuminuman;
  int hargamakanan;
  int hargaminuman;
  int totalbaju;
  float subtotal;
  float diskon;
  float totalrestaurant;
  
  do {
      system("cls");
      printf("Menu Pilihan UTS \n");
      printf("---------------- \n");
      printf("1. Rental DVD \n");
      printf("2. Factory Outlet \n");
      printf("3. Restaurant \n");
      printf("4. Keluar \n");
      printf("---------------- \n");
      printf("Masukan menu pilihan : ");
      scanf("%i", &menu);
      
      switch(menu) {
                   case 1:
                        system("cls");
                        printf("Input Rental DVD \n");
                        printf("---------------- \n");
                        printf("Nama = ");
                        fflush(stdin); gets(nama);
                        printf("Status Anggota (Y/T) = ");
                        status = getche();
                        printf("\nJumalah DVD = ");
                        scanf("%i", &jumlah);
                        
                        total = jumlah * 5000;
                        
                        printf("\nOutput Rental DVD \n");
                        printf("---------------- \n");
                        printf("Nama = %s \n", nama);
                        printf("Status Anggota (Y/T) = %c \n", status);
                        printf("Jumlah DVD = %i \n", jumlah);
                        if(status == 'y') {
                                  total = total - 1000;
                                  printf("Total = (%i x 5000) - 1000 = %i \n", jumlah, total);
                        } else {
                          printf("Total = %i x 5000 = %i \n", jumlah, total);
                        }
                        
                        printf("\nTekan sembarang tombol untuk kembali ke menu \n");
                        getch();
                        break;
                   
                   case 2:
                        system("cls");
                        printf("Factory Outlet \n");
                        printf("---------------- \n");
                        printf("\nMasukan Jumlah Baju = ");
                        scanf("%i", &jumlahbaju);
                        
                        if (jumlahbaju % 2 == 1) {
                           totalbaju = jumlahbaju * 10000;
                        } else {
                          totalbaju = jumlahbaju * 5000;
                        }
                        
                        printf("\nJumlah Baju = %i\n", jumlahbaju);
                        printf("Total = %i\n", totalbaju);
                        printf("\nTekan sembarang tombol untuk kembali ke menu \n");
                        getch();
                        break;
                        
                   case 3:
                        system("cls");
                        printf("Menu Makanan dan Minuman \n");
                        printf("------------------------ \n");
                        printf("1. Spicy Chicken Rp. 40.000 \n");
                        printf("2. Big Burger Rp. 30.000 \n");
                        printf("3. Orange JUice Rp. 20.000 \n");
                        printf("4. Milkshake Rp. 10.000 \n");
                        printf("\nMasukan menu makanan (1/2) = ");
                        scanf("%i", &menumakanan);
                        printf("Masukan menu minuman (3/4) = ");
                        scanf("%i", &menuminuman);
                        
                        if (menumakanan == 1) {
                           hargamakanan = 40000;
                        } else {
                          hargamakanan = 30000;
                        }
                        
                        if (menuminuman == 3) {
                           hargaminuman = 20000;
                        } else {
                          hargaminuman = 10000;
                        }
                        
                        subtotal = hargamakanan + hargaminuman;
                        
                        if (subtotal >= 50000) {
                           diskon = subtotal * 0.1;             
                        } else {
                          diskon = 0;
                        }
                        
                        totalrestaurant = subtotal - diskon;
                        
                        printf("\nSubtotal = %.2f \n", subtotal);
                        printf("Diskon = subtotal x persen = %.2f x 10 = %.2f \n", subtotal, diskon);
                        printf("Total = subtotal - diskon = %.2f - %.2f = %.2f \n", subtotal, diskon, totalrestaurant);
                        
                        printf("\nTekan sembarang tombol untuk kembali ke menu \n");
                        getch();
                        break;
                        
                   case 4:
                        return 0;
                        
                   default:
                           printf("Menu tidak terdaftar!");
                           getch();
      }
  } while (menu != 5);	
}
