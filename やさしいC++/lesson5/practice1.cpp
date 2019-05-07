#include <iostream>
using namespace std;
int main(){
    int res;
    cout << "整数を入力してください\n";
    cin >> res;
    if(res % 2 == 0)cout << res << "は偶数です\n";
    else cout << res << "は奇数です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ