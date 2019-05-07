#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "変数を２つ入力してください\n";

    cin >> num1 >> num2;

    cout << "num1には" << num1 << "が入力されました\n";
    cout << "num2には" << num2 << "が入力されました\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ