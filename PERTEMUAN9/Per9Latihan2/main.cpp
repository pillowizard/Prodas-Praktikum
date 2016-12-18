#include <cstdlib>
#include <iostream>

using namespace std;

int input_alas()
{
    int alas;
    cout<<"Masukan alas = ";
    cin>>alas;
    return alas;  
}

int input_tinggi()
{
    int tinggi;
    cout<<"Masukan tinggi = ";
    cin>>tinggi;
    return tinggi;  
}

void input_alas_tinggi(int *alas, int *tinggi)
{
    cout<<"Masukan alas = ";
    cin>>*alas;
    
    cout<<"Masukan tinggi = ";
    cin>>*tinggi; 
}

float hitung_luas(int alas, int tinggi)
{
    return 0.5 * alas * tinggi;      
}

void cetak_luas(float luas)
{
    cout<<"Luas = "<<luas<<endl; 
}

int main(int argc, char *argv[])
{
    int alas;
    int tinggi;
    float luas;
    
    //input
    input_alas_tinggi(&alas, &tinggi);
    
    //proses
    luas = hitung_luas(alas, tinggi);
    
    //output
    cetak_luas(luas);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
