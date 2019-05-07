
#include<iostream>
using namespace std;
int main(){
    cout << 123 << '\n';
    cout << "\\100もらった\n";
    cout << "またあした\n";

    return 0; 
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ