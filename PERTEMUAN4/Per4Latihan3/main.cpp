#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char nim[10];
    char nama[21];
    char kelas[10];
    char jurusan[20];
    char fakultas[26];
    
    cout<<"Masukan nim      = ";
    fflush(stdin);
    cin.get(nim, 9);
    
    cout<<"Masukan nama     = ";
    fflush(stdin);
    cin.get(nama, 20);
    
    cout<<"Masukan kelas    = ";
    fflush(stdin);
    cin.get(kelas, 9);
    
    cout<<"Masukan jurusan  = ";
    fflush(stdin);
    cin.get(jurusan, 19);
    
    cout<<"Masukan fakultas = ";
    fflush(stdin);
    cin.get(fakultas, 25);
    
    cout<<"Nim      = "<<nim<<endl;
    cout<<"Nama     = "<<nama<<endl;
    cout<<"Kelas    = "<<kelas<<endl;
    cout<<"Jurusan  = "<<jurusan<<endl;
    cout<<"Fakultas = "<<fakultas<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
