#include <iostream>
#include <string>
using namespace std;
//グローバル変数はプログラムの始めから終わりまでメモリが確保される
//グローバル変数は初期化しないと0で初期化される
int a;

void cout_func();

int main(){

    for(int i = 0; i < 5; i++){
        cout_func();
    }

    return 0;
}

void cout_func(){
    int b = 0;
    //記憶クラス指定子"static"をつけるとプログラムの始めから終わりまでメモリが確保される
    //静的寿命を持つローカル変数となり初期化しないと0で初期化される
    static int c;

    cout << a;
    cout << b;
    cout << c << '\n';

    a++;
    b++;
    c++;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ