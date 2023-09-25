     #include<iostream>
     using namespace std;

     int main(){
        int pilih;
        string hobi;

        cout<< "pilih salah satu hobimu"endl;
        cout<< "1. bermain"<<endl;
        cout<< "2. belajar"<endl;
        cout<< "tentukan pilihanmu :";
        cin>>pilih;

        switch(pilih){
            case 1: 
            hobi = "bermain";
            break;
            case 2:
            hobi: "belajar"
            break;

        }
        cout<<"hobi saya adalah"<<hobi;

     }
