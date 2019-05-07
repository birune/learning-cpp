#include <iostream>
#include <string>
using namespace std;
//なんか問題文ではポインタで定義されてた
int length(char str[]);

int main(){

    char str[100];
    cout << "文字列を入力してください\n";
    cin >> str;
    cout << "文字列の長さは" << length(str) << "です\n";

    return 0;
}

int length(char str[]){
    int i = 0;
    for(i = 0; str[i] != '\0'; i++){
    }
    return i;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ