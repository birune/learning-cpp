#include <iostream>
using namespace std;
int main(){
    int res;
    cout << "整数を入力してください\n";
    cin >> res;

    if(res == 1){
        cout << "1が入力されました\n";
    //上のif文が実行された場合、下は実行されない
    }else if(res <=2){
        cout << "2以下が入力されました\n";
    }else{
        cout << "3以上が入力されました\n";
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ