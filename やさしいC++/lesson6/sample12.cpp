#include <iostream>
using namespace std;
int main (){
    int res;
    cout << "何回目の処理を飛ばしますか\n";
    cin >> res;
    for(int i = 1; i <=10; i++){
        //continueでブロック内の処理を飛ばし先頭に戻る
        if(i == res)continue;
        cout << i << "回目の処理です\n"; 
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ