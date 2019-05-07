#include<iostream>
using namespace std;
int main(){
    int num1;
    //変数宣言と同時に値を代入することを変数の初期化という
    int num2 = 5;
    
    num1 = 3;
    
    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";
    
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ