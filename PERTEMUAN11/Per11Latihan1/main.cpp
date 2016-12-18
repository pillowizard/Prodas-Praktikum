#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct
{
    int tgl;
    int bln;
    int thn;
} tanggal;

typedef struct
{
    char nama[31];
    int nilai;
    float ipk;
    tanggal tgl_masuk;        
} mahasiswa;

int main(int argc, char *argv[])
{
    mahasiswa mhs;
    
    // input
    cout<<"Masukan Nama = ";
    fflush(stdin);
    cin.get(mhs.nama, 30);
    cout<<"Masukan Nilai = ";
    cin>>mhs.nilai;
    cout<<"Masukan IPK = ";
    cin>>mhs.ipk;
    cout<<"Masukan Tanggal Masuk = ";
    cin>>mhs.tgl_masuk.tgl;
    cout<<"Masukan Bulan Masuk = ";
    cin>>mhs.tgl_masuk.bln;
    cout<<"Masukan Tahun Masuk = ";
    cin>>mhs.tgl_masuk.thn;
    
    // output
    cout<<endl;
    cout<<"Nama = "<<mhs.nama<<endl;
    cout<<"Nilai = "<<mhs.nilai<<endl;
    cout<<"IPK = "<<mhs.ipk<<endl;
    cout<<"Tanggal Masuk = "<<mhs.tgl_masuk.tgl<<endl;
    cout<<"Bulan Masuk = "<<mhs.tgl_masuk.bln<<endl;
    cout<<"Tahun Masuk = "<<mhs.tgl_masuk.thn<<endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
