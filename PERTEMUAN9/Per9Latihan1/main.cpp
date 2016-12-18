#include <cstdlib>
#include <iostream>

using namespace std;

void cetak_luas(int sisi)
{
    int luas = sisi * sisi;
    cout<<"luas = "<<luas<<endl;
}

int main(int argc, char *argv[])
{
    int sisi;
    int luas;
    
    sisi = 10;
    cetak_luas(sisi);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
