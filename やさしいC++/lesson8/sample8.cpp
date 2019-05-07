#include <iostream>
using namespace std;

int main(){

    int a;
    //"型名 &参照名 = 変数;"で参照は変数を扱うことができる
    //参照は必ず変数で初期化しなければならない
    int &rA = a;

    cout << "変数aの値は" << a << "です\n";
    cout << "参照rAの値は" << rA << "です\n";

    rA = 50;
    cout << "参照rAは" << rA << "に変更されました\n";
    cout << "変数aも" << a << "に変更されました\n";
    cout << "変数aのアドレスは" << &a << "です\n";
    cout << "参照rAのアドレスも" << &rA << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ