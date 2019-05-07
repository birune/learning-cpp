#include <iostream>
using namespace std;

int main(){

    int a;
    int* pA;

    a = 5;
    pA = &a;

    cout << "変数aの値は" << a << "です\n";
    cout << "変数aのアドレスは" << &a << "です\n";
    cout << "ポインタpAの値は" << pA << "です\n";
    //"*ポインタ名"でポインタの指す変数の値を示す
    //この"*"を間接参照演算子という
    cout << "*pAの値は" << *pA << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ