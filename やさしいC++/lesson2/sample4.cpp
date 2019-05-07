#include <iostream>

using namespace std;

int main(void){
    // 特殊な文字は"\"をつけてエスケープシーケンスとして表示する
    cout << "アポストロフィー:" << '\''<<'\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ