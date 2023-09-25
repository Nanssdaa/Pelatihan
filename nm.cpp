#include<iostream>
using namespace std;

int main(){
    int p, l, L;
    string ulang;

    do{
        cout<<"=====menghitung luas persegi panjang=====\n";
        cout<< "masukan nilai panjang: ";
        cin >>p;
        cout<< "masukan nilai lebar: ";
        cin>l;
        L = p*l;
        cout << "luas persegi panjang adalah : " << L << endl;
        cout << "apakah anda ingin menghitung kembali <y/n> : ";
        cin>> ulang;
        }while(ulang == "y");
        cout << "program selesai!!!\n";
}
    

    

    

