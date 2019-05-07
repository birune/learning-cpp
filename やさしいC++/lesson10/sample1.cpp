#include <iostream>
#include <string>
using namespace std;
//グローバル変数
string a = "global";
string b = "global";
int c = 0;

int main(){

    string a = "local";
    int c = 0;
    //変数名がかぶるとローカル変数が優先される
    cout << a << '\n';
    cout << b << '\n';
    //グローバル解決演算子"::"を前につけてグローバル変数であることを示す
    cout << c << ::c << '\n';

    ::c++;

    cout << c << ::c << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ