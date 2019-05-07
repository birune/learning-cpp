#include <iostream>
#include <string>
using namespace std;

int max(int x[]);

int main(){

    int x[5];
    cout << "5人のテストの点数を入力してください\n";
    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }
    cout << "最大値は" << max(x) << "です\n";

    return 0;
}

int max(int x[]){
    int result = 0;
    for(int i = 0; i < 5; i++){
        if(result < x[i]){
            result = x[i];
        }
    }
    return result;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ