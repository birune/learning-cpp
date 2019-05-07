#include <iostream>
using namespace std;
//関数の呼び出しを関数の定義より先に行う場合
//関数プロトタイプ宣言"戻り値の型　関数名(引数リスト);"する必要がある
int max(int x, int y);

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
int max(int x, int y){
    if(x > y)return x;
    else return y;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ