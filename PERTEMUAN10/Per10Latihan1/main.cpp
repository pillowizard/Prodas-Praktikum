#include <cstdlib>
#include <iostream>

using namespace std;

int i;

void input_jari(int jari[3])
{
    for (i = 0; i < 3; i++) {
        cout<<"Masukan jari-jari ke-"<<i+1<<" = ";
        cin>>jari[i];
    }
}

void hitung_luas(int jari[3], float luas[3])
{
    for (i = 0; i < 3; i++) {
        luas[i] = 3.14 * jari[i] * jari[i];
        cout<<"Luas ke-"<<i+1<<" = "<<luas[i]<<endl;
    }
}

float hitung_rata(float luas[3])
{
    float total_luas = 0;
    float rata;
    
    for (i = 0; i < 3; i++) {
        total_luas = total_luas + luas[i];
    }
    
    rata = total_luas / 3;
    return rata;
}

void cetak_rata(float rata)
{
    cout<<"Rata - rata = "<<rata<<endl;     
}

int main(int argc, char *argv[])
{   
    int jari[3];
    float luas[3];
    
    //proses input
    input_jari(jari);
    
    //proses hitung dan output
    hitung_luas(jari, luas);
    
    //hitung rata
    cetak_rata(hitung_rata(luas));
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
