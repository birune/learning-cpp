#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    //ファイルをオープンします
    ifstream fin("test.txt");
    if(!fin){
        cout << "ファイルをオープンできませんでした\n";
        return 1;
    }else{
        cout << "ファイルをオープンしました\n";
    }

    char str1[16];
    char str2[16];
    //ファイルからデータを読み込む
    fin >> str1 >> str2;
    cout << str1 << '\n';
    cout << str2 << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ