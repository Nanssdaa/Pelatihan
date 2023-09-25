#include<iostream>
using namespace std;

int main()
{
    int a, t, L;
    string ulang;

    do{
        cout<<"=====menghitung luas segitiga=====\n";
        cout<< "1. MASUKAN PANJANG ALAS ";
        cin >>a;
        cout<< "2. MASUKAN NILAI TINGGI:";
        cin>>t;
        L = a/2*t;
        cout << "LUAS SEGITIGA ADALAH " << L << endl;
        cout << "DO YOU WANT RECULATE? <y/n> : ";
        cin>> ulang;
    } while(ulang == "y");
        cout << "=====PROGRAM DONE=====\n";
    
        
}
    