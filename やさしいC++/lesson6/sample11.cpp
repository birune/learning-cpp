#include <iostream>
using namespace std;
int main(){
    int res;
    cout << "成績を入力してください\n";
    cin >> res;
    switch(res){
        case 1:
        case 2:
            //"res == 1 || res == 2"のとき実行される
            cout << "もう少し頑張りましょう\n";
            break;
        case 3:
        case 4:
            //"res == 3 || res == 4"のとき実行される
            cout << "この調子で頑張りましょう\n";
            break;
    }
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ