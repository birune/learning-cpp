#include <iostream>
using namespace std;
int main(){
    char alphabet;
    cout << "アルファベットの最初の文字はなんですか\n";
    cin >> alphabet;
    cout << "アルファベットの最初の文字は" << alphabet << "です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ