#include <iostream>
using namespace std;
int main(){
    //const 変数の初期化;　で変数の値を固定する
    //初期化しないとコンパイルは通らない
    const double pi = 3.1415;
    //下記のようにあとから変数に値を代入しようとしてもコンパイルが通らない
    //pi = 1.14514;
    
    cout << "円周率は" << pi << "です\n";

    

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ