#include <iostream>
using namespace std;
//関数テンプレートに実引数を渡すと、その型を扱う関数が生成される
/*"template <class テンプレート引数のリスト>
関数の定義"*/
//型以外処理が全く同じ関数を使いたいときに役に立つ
template <class T>
//具体的な型名の代わりにTを仮の型名としている
T maxt(T x, T y){
    if(x > y)return x;
    else return y;
}

int main(){
    int ia, ib;
    double da, db;

    cout << "二つの整数を入力してください\n";
    cin >> ia >> ib;

    cout << "二つの小数を入力してください\n";
    cin >> da >> db;

    int ans1 = maxt(ia, ib);
    double ans2 = maxt(da, db);

    cout << "整数値の最大値は" << ans1 << "です\n";
    cout << "小数値の最大値は" << ans2 << "です\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ