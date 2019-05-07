#include <iostream>
using namespace std;
int main(){
    int res;
    cout << "何回目で処理を中断しますか\n";
    cin >> res;
    int i = 1;
    while(1){
        cout << i << "回目の処理です\n";
        if(i == res){
            break;
        }
        i++;
    }
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ