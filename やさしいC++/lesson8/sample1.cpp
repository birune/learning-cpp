#include <iostream>
using namespace std;

int main(){

    int a;
    a = 5;

    cout << "変数aの値は" << a << "です\n";
    //"&変数名"で変数のアドレスを示す
    cout << "変数aのアドレスは" << &a << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ