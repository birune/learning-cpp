#include <iostream>
#include <string>
using namespace std;



int main(){

    int *pA;
    //new演算子はメモリを確保しそのアドレスを返す
    //ポインタを定義した後"ポインタ名 = new 型名"と記述した時点でメモリを確保する
    pA = new int;

    cout << "動的にメモリを確保しました\n";

    *pA = 10;

    cout << *pA << '\n';

    //delete演算子は確保されているメモリを"delete ポインタ名"で開放する
    //動的にメモリを確保したら必ず開放しなくてはならない
    delete pA;

    cout << "確保したメモリを解放しました\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ