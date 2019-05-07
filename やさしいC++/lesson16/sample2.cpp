#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    char ch;

    //cin.get()でi文字ずつ読み込む
    //cout.put()で1文字ずつ出力する
    while(1){
        cin.get(ch);
        cout.put(ch);
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ