#include <iostream>
using namespace std;
int main(){
    double pi;
    cout << "円周率の値はいくらですか\n";
    cin >> pi;
    cout << "円周率の値は" << pi << "です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ