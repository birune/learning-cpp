#include <iostream>
using namespace std;
int main(){
    int a=0, b=1;
    //sizeof演算子"sizeof(型名or変数)"でその変数のサイズがバイト単位でわかる
    cout << "int型のサイズは" << sizeof(int) << "です\n";
    cout << "aのサイズは" << sizeof(a) << "です\n";
    cout << "a+bのサイズは" << sizeof(a+b) << "です\n";
    cout << "double型のサイズは" << sizeof(double) << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ