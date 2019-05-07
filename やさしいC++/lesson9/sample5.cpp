#include <iostream>
using namespace std;

int main(){

    int test[5]  {0, 1, 2, 3, 4};

    cout << "test[0]の値は" << test[0] << "です\n";
    cout << "test[0]のアドレスは" << &test[0] << "です\n";
    //"配列名"で先頭要素のアドレスを表す
    cout << "testの値は" << test << "です\n";
    //"*配列名"で先頭要素の値を表せる
    cout << "*testの値は" << *test << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ