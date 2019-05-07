#include <iostream>
using namespace std;

int square(int x);

int main(){

    int x;
    cout << "整数を入力してください\n";
    cin >> x;
    square(x);

    return 0;
}

int square(int x){
    int ans;
    ans = x * x;
    cout << x << "の二乗は" << ans << "です\n";
    return ans;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ