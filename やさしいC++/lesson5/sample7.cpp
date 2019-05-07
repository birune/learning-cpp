#include <iostream>
using namespace std;
int main(){
    int res;
    char ans;

    cout << "何番目のコースにしますか\n";
    cin >> res;

    //"条件式 ? trueの式 : falseの式;"で簡単な条件分岐ができる
    //"?:は条件演算子"
    ans = (res == 1)? 'A' : 'B';

    cout << ans << "コースを選択しました\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ