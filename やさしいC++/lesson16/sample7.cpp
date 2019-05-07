#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;

//マニピュレータとは入出力のための書式を設定する特別な関数

int main(){

    //endlで改行を出力する 
    cout << "Hello, world" << endl;

    //decで10, octで8, hexで16進数での出力に設定できる
    cout << "10を10進数で表記すると" << dec << 10 << "です\n";
    cout << "10を8進数で表記すると" << oct << 10 << "です\n";
    //最後に指定した書式が有効になる
    cout << "12を8進数で表記すると" << 12 << "です\n";
    cout << "10を16進数で表記すると" << hex << 10 << "です\n";

    for(int i=0; i<=10; i++){
        //setw(出力幅)で出力幅を指定できる
        cout << setw(3) << i;
    }
    cout << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ