#include<iostream>
using namespace std;
int main(){
    //以下8進数
    cout << 06 <<'\n';
    cout << 024 <<'\n';
    cout << 015 <<'\n' << '\n';

    //以下16進数
    cout << 0x6 << '\n';
    cout << 0x14 << '\n';
    cout << 0xD << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ