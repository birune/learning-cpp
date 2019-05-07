#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    //cout.width(出力幅)で出力幅を設定できる
    for(int i=0; i<=10; i++){
        cout.width(3);
        cout << i;
    }

    cout << '\n';

    //cout.fill(文字リテラル)で空白を指定文字で埋められる
    for(int i=0; i<=10; i++){
        cout.width(3);
        cout.fill('-');
        cout << i;
    }

    cout << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ