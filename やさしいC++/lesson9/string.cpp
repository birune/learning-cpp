#include <iostream>
#include <string>
using namespace std;
//stringの使い方
int main(){
    //string型の変数の宣言
    string str;
    str = "str";
    //10文字のaで初期化
    string str1(10,'a');
    //abcで初期化
    string str2("abc");
    //dateで初期化
    const char *data = "hoge";
    string str3(data);
    //data2で初期化
    char data2[] = "hoge2";
    string  str4(data2);

    cout << str << '\n';
    cout << str1 << '\n';
    cout << str2 << '\n';
    cout << str3 << '\n';
    cout << str4 << '\n';

    str = "str6";

    cout << str << '\0';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ