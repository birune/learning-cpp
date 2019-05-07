#include <iostream>
using namespace std;
int main(){
    int a=0,b;
    //前置インクリメント演算子"++a"では代入前にインクリメントする
    b = ++a;
    cout << "前置インクリメント演算子では" << b << "です\n";

    a = 0;
    b = 0;
    //後置インクリメント演算子"a++"では代入後にインクリメントする
    b = a++;
    cout << "後置インクリメント演算子では" << b << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ