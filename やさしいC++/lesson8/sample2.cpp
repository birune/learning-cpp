#include <iostream>
using namespace std;

int main(){
    //ポインタとは変数のアドレスを格納する変数である
    int a;
    //"型名* ポインタ名"でポインタを宣言できる
    //ポインタには指定した型以外の型の変数のアドレスを格納できない
    int* pA;

    a = 5;
    pA = &a;

    cout << "変数aの値は" << a << "です\n";
    cout << "変数aのアドレスは" << &a << "です\n";
    cout << "ポインタpAの値は" << pA << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ