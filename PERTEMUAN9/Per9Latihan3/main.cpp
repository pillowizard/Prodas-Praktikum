#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void menu_pilihan()
{
     system("cls");
     cout<<"Menu Pilihan"<<endl;
     cout<<"----------------------"<<endl;
     cout<<"1. Data Pembeli"<<endl;
     cout<<"2. Stok Ayam dan Bebek"<<endl;
     cout<<"3. Pemesanan"<<endl;
     cout<<"4. Cetak Faktur"<<endl;
     cout<<"5. Keluar"<<endl;
     cout<<"----------------------"<<endl;
}

int input_menu_pilihan()
{
    int menu;
    cout<<"Masukan Menu Pilihan = ";
    cin>>menu;    
}

void input_data_pembeli(char nama[31], char alamat[51])
{
     system("cls");
     cout<<"Masukan Nama = ";
     fflush(stdin);
     cin.get(nama, 30);
     
     cout<<"Masukan Alamat = ";
     fflush(stdin);
     cin.get(alamat, 50);
     
     cout<<"Tekan sembarang tombol untuk kembali";
     getch();
}

int main(int argc, char *argv[])
{
    int menu;
    char nama[31];
    char alamat[51];
    
    do
    {
        menu_pilihan();
        menu = input_menu_pilihan();
        
        switch(menu)
        {
                    case 1:
                         input_data_pembeli(nama, alamat);
                         break; 
                         
                    case 2:
                         break;
                         
                    case 3:
                         break;
                         
                    case 4:
                         break;
                         
                    case 5:
                         break;
                         
                    default:            
        }
    } while (menu != 5);
    system("PAUSE");
    return EXIT_SUCCESS;
}
