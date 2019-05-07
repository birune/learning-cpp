#include <iostream>
using namespace std;
inline int max(int x, int y);
//"inline 戻り値の型 関数名(引数リスト)"でインライン関数を定義できる
//inline関数で定義された関数は呼び出し部分に関数内の処理を埋め込む
//短い処理だけがコンパイラによって埋め込まれる仕組みになっている
//プログラムの処理が早くなることがある
inline int max(int x, int y){
    if(x > y)return x;
    else return y;
}
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