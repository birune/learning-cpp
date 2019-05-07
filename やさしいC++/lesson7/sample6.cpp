#include <iostream>
using namespace std;
int buy(int x, int y);
//関数の定義の先頭に戻り値の型を指定する
int buy(int x, int y){
    int z;
    cout << x << "円と" << y << "円の車を買いました\n";
    z = x+y;

    //"return 戻り値"で一つだけ戻り値を返せる
    //return文が来た時点で関数内の処理は終了する
    return z;
}

int main(){
    int num1, num2, sum;

    cout << "いくらの車を買いますか\n";
    cin >> num1;

    cout << "いくらの車を買いますか\n";
    cin >> num2;
    //関数を呼び出して戻り値を"sum"に代入している
    sum = buy(num1, num2);

    cout << "合計で" << sum << "円です\n";

    //戻り値は必ずしも利用しなくていい
    buy(num1, num2);

    return 0;

}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ