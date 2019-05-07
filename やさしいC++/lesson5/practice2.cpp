#include <iostream>
using namespace std;
int main(){
    int res1, res2;
    cout << "整数を2つ入力してください\n";
    cin >> res1 >> res2;
    if(res1 == res2)cout << "2つの数は同じ値です\n";
    else cout << res1 << "より" << res2 << "のほうが大きいです\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ