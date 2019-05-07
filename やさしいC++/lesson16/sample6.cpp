#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    cout.setf(ios::right, ios::adjustfield);
    for(int i=0; i<=5; i++){
        cout.width(5);
        cout.fill('-');
        cout << i;
    }
    cout << '\n';
    cout.unsetf(ios::right);

    cout.setf(ios::left, ios::adjustfield);
    for(int i=0; i<=5; i++){
        cout.width(5);
        cout.fill('-');
        cout << i;
    }
    cout << '\n';
    cout.unsetf(ios::left);

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ