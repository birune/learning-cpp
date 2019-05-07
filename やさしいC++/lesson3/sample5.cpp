#include<iostream>
using namespace std;
int main(){
    int num = 0;
    
    cout << "整数を入力してください\n";
    // cin >> 変数名; で標準入力
    cin >> num;

    cout << "numの値は\"" << num << "\"です\n" ;

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ