#include <iostream>
using namespace std;
int main(){
    cout << "１～１０までの偶数を出力します\n";
    for(int i = 1; i < 11; i++){
        if(i % 2 == 0){
            cout << i << "\n";
        }
    }
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ