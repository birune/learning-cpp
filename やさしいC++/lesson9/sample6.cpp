#include <iostream>
using namespace std;

int main(){

    int test[5] = {0, 1, 2, 3, 4};

    //"ポインタ+"でポインタの指す要素の次の要素のアドレスを得る
    //"ポインタ-"でポインタの指す要素の前の要素のアドレスを得る
    //"ポインタ-ポインタ"で二つのポインタの指す要素の間の要素を得る
    cout << "testの値は" << test << "です\n";
    cout << "test+1の値は" << test+1 << "です\n";
    cout << "test[1]の値は" << test[1] << "です\n";
    cout << "*(test+1)の値は" << *(test+1) << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ