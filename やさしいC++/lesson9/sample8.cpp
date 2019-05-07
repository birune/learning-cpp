#include <iostream>
using namespace std;

int main(){

    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};//終端文字忘れずに
    //文字列配列の初期化時に限り""で囲んで初期化できる
    //この時、終端文字は自動で追加される
    char str2[] = "Hello";

    cout << str1 << '\n';
    cout << str2 << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ