#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

string shifrlash(string parol){
    string yangiparol="";
    for(int i=0; i<parol.length(); i++){
        srand(parol[i]);
        int j=0;
        while(j < 5){
            char belgi=rand()%256;
            if(isalnum(belgi)){
                yangiparol+=belgi;
                j++;
            }
        }
    }
    return yangiparol;
}

char harf(string num){
    string newstr="";
    char natija;
    for(int i=0; i<256; i++){
        srand(i);
        int j=0;
        while(j<5){
            char belgi=rand()%256;
            if(isalnum(belgi)){
                newstr+=belgi;
                j++;
            }
        }
        if(num==newstr){
            natija=i;
        }
        newstr="";
    }
    return natija;
}

string tiklash(string matn){
    string qism, natija="";
    int i=0;
    while(i<matn.length()){
        qism=matn;
        qism.erase(0,i);
        qism.erase(5);
        natija+=harf(qism);
        i+=5;
    }
    return natija;
}

int main(){
    cout << "1.matnni shifirlash\n";
    cout << "2.matnni tiklash\n";
    int son;
    string parol, javob;
    cin >> son;
    system("cls");
    switch(son){
        case 1:
            cout << " parolni kiriting: ";
            cin >> parol;
            javob=shifrlash(parol);break;
        case 2:
            cout << " parolni kiriting: ";
            cin >> parol;
            javob=tiklash(parol);break;
        default:
            cout << "raqamni qaytadan kiriting\n";
    }
    cout << javob << endl<<endl;
    main();
    return 0;
}
// parolni shifirlash