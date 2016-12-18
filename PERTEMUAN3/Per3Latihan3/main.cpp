#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    //deklarasi variable
    double sisi;
    double luas;
    
    //input sisi
    cout<<"Masukan sisi = ";
    cin>>sisi;
    
    //hitung luas
    luas = pow(sisi, 2);
    
    //output luas
    cout<<"Luas persegi dengan sisi "<<sisi<< " adalah "<<luas<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
