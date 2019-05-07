#include <iostream>
#include <string>
using namespace std;



int main(){

    int *pA;
    pA = new int;
    *pA = 10;
    cout << *pA;
    delete pA;

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ