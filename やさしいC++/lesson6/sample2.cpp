#include <iostream>
using namespace std;
int main(){
    //条件式の中で宣言した変数はスコープがfor文内になる
    for(int i = 1; i <= 5; i++){
        cout << i << "回目の繰り返しです\n";
    }
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ