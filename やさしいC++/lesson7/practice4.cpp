#include <iostream>
using namespace std;

template <class T>
T squaret(T x){
    T ans;
    ans = x * x;
    cout << x << "の二乗は" << ans << "です\n";
    return ans;
}

int main(){

    int ix;
    cout << "整数を入力してください\n";
    cin >> ix;
    squaret(ix);

    double dx;
    cout << "小数を入力してください\n";
    cin >> dx;
    squaret(dx);

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ