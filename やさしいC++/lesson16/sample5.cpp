#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    double num = 1.2345678;
    int n;

    cout <<"有効桁を入力してください\n";
    cin >> n;

    //cout.precision(変数名)で有効桁数を設定できる
    cout.precision(n);

    cout << "円周率は" << num << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ