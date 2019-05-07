#include <iostream>
using namespace std;
int main(){
    int num;
    //"num != 0"と同義
    while(num){
        cout << "0が入力されるまで繰り返します\n";
        cin >> num;
    }
    //"num == 0"と同義
    while(!num){
        cout << "0以外が入力されるまで繰り返します\n";
        cin >> num;
    }
    //無限ループ
    while(1){
        cout << "0が入力されるまで繰り返します\n";
        cin >> num;
        if(num == 0){
            break;
        }
    }
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ