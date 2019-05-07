#include <iostream>
using namespace std;
int main(){
    //演算内容をoperator、演算対象をoperandという
    cout << "1+2は" << 1+2 << "です\n";
    cout << "3*4は" << 3*4 << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ