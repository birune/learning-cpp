#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//多分覚えなくていい

int main(){

    int num;
    cout << "1~9までの数を入力してください\n";
    cin >> num;
    /*
    try{
        例外を検出する処理
        throw 例外;
    }cacth(型){ //例外と型の位置が一致するとブロック内の処理を行う
        例外時の処理;
    }
    */
   try{
        if(num <= 0){
            throw "0以下を入力しました";
        }
        if(num >= 10){
            throw "10以上を入力しました";
        }
   }catch(const char *err){
       cout << "エラー : " << err << '\n';
       return 1;
   }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ