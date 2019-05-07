#include <iostream>
using namespace std;
int main(){
    int score=0, i;
    cout << "テストの点数を入力してください\n";
    do{
        cin >> i;
        score += i;
    }while(i);
    cout << "テストの合計は" << score << "点です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ