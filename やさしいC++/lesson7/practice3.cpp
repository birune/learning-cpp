#include <iostream>
using namespace std;

inline int square(int x);
inline double square(double x);

int main(){

    int ix;
    cout << "整数を入力してください\n";
    cin >> ix;
    square(ix);

    double dx;
    cout << "小数を入力してください\n";
    cin >> dx;
    square(dx);

    return 0;
}

inline int square(int x){
    int ans;
    ans = x * x;
    cout << x << "の二乗は" << ans << "です\n";
    return ans;
}

inline double square(double x){
    double ans;
    ans = x * x;
    cout << x << "の二乗は" << ans << "です\n";
    return ans;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ