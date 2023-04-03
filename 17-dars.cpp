#include <iostream>

using namespace std;


int main () {
    string programmingLang[] = {"Java", "Javascript", "C++", "Python", "C#"};
    int idx = 1;
    cout << "Nechanchi indexdagi element kerak";
    cin >> idx;
    cout << programmingLang[idx];
    return 0;
}



/*

#include <iostream>

using namespace std;


int foo(){
    int step = 0;
    cout << "Nechta son kiritmoqchisiz: "; cin >> step;
    int nums[step] = {};
    int count = 0;
    
   
    
    for(int i = 0; i < step; i++){
        cout << "Sonni kiriting: ";
        cin >> nums[i];
    }
    
    for(int i = 0; i < step; i++){
        if(nums[i] < 0){
            count++;
        }
    }
    return count;
}


int main () {
    
    int res = foo();
    
    cout << "Berilgan sonlar orasida " << res << " ta manfiy son bor"; 
    
    
    
    //  userdan nechta son kiritishini so'rang berilgan sonlarni massivga yig'ing. berilgan sonlarning nechtasi manfiy ekanligini toping
    
    // nechta son kerak
    
    return 0;
}





*/