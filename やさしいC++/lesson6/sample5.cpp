#include <iostream>
using namespace std;
int main(){
    int i = 1;
    //条件がtrueの間ループする
    while(i <= 5){
        cout << i << "回目の繰り返しです\n";
        i++;
    }
    return 0;

}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ