//プロトタイプ宣言をするヘッダファイルを用意する
//関数の定義を記述するファイルを作る

#include <iostream>
//自作のヘッダファイルは""include "ヘッダファイル名""で読み込む
#include "myfunc.h"
#include <string>
using namespace std;

int main(){

    int num1, num2, ans;

    cout << "1番目の整数を入力してください\n";
    cin >> num1;

    cout << "2番目の整数を入力してください\n";
    cin >> num2;

    ans = max(num1, num2);

    cout << "最大値は" << ans << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ