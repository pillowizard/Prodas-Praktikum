#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct
{
    char nama[31];
    char alamat[51];
} pengarang;

typedef struct
{
    int kode;
    char judul[31];
    char penerbit[21];
    pengarang peng;
    int tahun;
} buku;

int main(int argc, char *argv[])
{
    const int JUMLAH_ARRAY = 2;
    int i;
    buku bk[JUMLAH_ARRAY];
    int kode_cari;
    bool ketemu = false;
    
    //input
    for (i = 0; i < JUMLAH_ARRAY; i++)
    {
        cout<<"Data ke-"<<i + 1<<endl;
        cout<<"---------------------------"<<endl;
        
        cout<<"Kode = ";
        cin>>bk[i].kode;
        cout<<"Judul = ";
        fflush(stdin);
        cin.get(bk[i].judul, 30);
        cout<<"Nama Pengarang = ";
        fflush(stdin);
        cin.get(bk[i].peng.nama, 30);
        cout<<"Tahun = ";
        cin>>bk[i].tahun;
        cout<<endl;
    }
    
    //output
    cout<<"Daftar Buku"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    for (i = 0; i < JUMLAH_ARRAY; i++)
    {
        cout<<bk[i].kode<<"\t";
        cout<<bk[i].judul<<"\t \t";
        cout<<bk[i].peng.nama<<"\t \t";
        cout<<bk[i].tahun<<"\t";
        cout<<endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
