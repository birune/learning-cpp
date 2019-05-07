#include <iostream>
#include <string>
using namespace std;



int main(){

    int num;
    int *pT;

    cout << "配列をいくつ用意しますか\n";
    cin >> num;
    //配列は"ポインタ名 = new int[要素数]"で確保する
    pT = new int[num];

    for(int i = 0; i < num; i++){
        cout << i+1 << "番目の要素を入力してください\n";
        cin >> pT[i];
    }

    for(int i = 0; i < num; i++){
        cout << "pT[" << i << "]は" << pT[i] << "です\n";
    }
    //配列は"delete[] ポインタ名"で開放する
    delete[] pT;

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ