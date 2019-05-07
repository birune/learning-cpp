#include <iostream>
#include <string>
using namespace std;



int main(){
    int i;
    char str[100];
    cin >> str;
    for(i = 0; str[i] != '\0'; i++){
    }
    cout << i << "literals";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ