#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int alas;
    int tinggi;
    float luas;
    
    cout<<"Masukan Alas = ";
    cin>>alas;
    cout<<"Masukan Tinggi = ";
    cin>>tinggi;
    
    luas = 0.5 * alas * tinggi;
    
    cout<<"Luas Segitiga = 1/2 * "<<alas<<" * "<<tinggi<<" = "<<luas<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
