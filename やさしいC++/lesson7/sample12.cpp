#include <iostream>
using namespace std;
//引数の型や数が異なっていれば、同じ名前を持つ関数を複数定義できる
//どちらの関数を使うかが必ず明確にわかるよう記述しなければならない
int max(int x, int y);
double max(double x, double y);
int main(){
    int ia, ib;
    double da, db;

    cout << "二つの整数を入力してください\n";
    cin >> ia >> ib;

    cout << "二つの小数を入力してください\n";
    cin >> da >> db;

    int ans1 = max(ia, ib);
    double ans2 = max(da, db);

    cout << "整数値の最大値は" << ans1 << "です\n";
    cout << "小数値の最大値は" << ans2 << "です\n";

    return 0;
}

int max(int x, int y){
    if(x > y)return x;
    else return y;
}

double max(double x, double y){
    if(x > y)return x;
    else return y;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ