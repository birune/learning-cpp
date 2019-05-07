#include <iostream>
using namespace std;
int main(){
    int i = 1;
    //中の処理を1度行ってから条件の判定をする
    //→必ず1度は実行される
    do{
        cout << i << "回目の繰り返しです\n";
        i++;
    }while(i <= 5);//";"忘れずに

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ