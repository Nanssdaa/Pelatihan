     #include<iostream>
     using namespace std;
     int main(){
        int chose;
        string GAME;
        do{
        cout<< "BEST CAPCOM GAME EVER"<<endl;
        cout<< "1. RESIDENT EVIL 4 REMAKE"<<endl;
        cout<< "2. RESIDENT EVIL 2 REMAKE"<<endl;
        cout<< "3. DEVIL MAY CRY 5"<<endl;
        cout<< "VOTE 1/2/3 :"<<endl;
        cin>>chose;
          
        switch(chose){
            case 1: 
            GAME = "RESIDENT EVIL 4 REMAKE";
            break;
            case 2:
            GAME = "RESIDENT EVIL 2 REMAKE";
            break;
            case 3:
            GAME = "DEVIL MAY CRY 5";
            break;
            default:
            GAME = "ERROR 404";
            break;
        }
        cout<<"YOUR VOTE: "<<GAME<< endl;
        }
        
        while(chose<=3);
     }
