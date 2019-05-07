#include <iostream>
using namespace std;
int main(){
    int res;
    cout << "整数を入力してください\n";
    cin >> res;
    //switch(変数){}
    switch(res){
        //case 条件:
        case 1:
            cout << "1が入力されました\n";
            //break;でswitch文を抜ける必要がある
            break;
        case 2:
            cout << "2が入力されました\n";
            break;
        //どのcaseにも入らなかった時の処理
        default:
            cout << "1,2以外が入力されました\n";
            break;
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ