#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;



int main(){

    //ファイルをオープンする
    //ofstream fout("ファイル名")
    ofstream fout("test.txt");
    //条件式はfout.fail()でも可能
    if(!fout){
        cout << "ファイルをオープンできませんでした\n";
        return 1;
    }else{
        cout << "ファイルをオープンしました\n";
    }

    //ファイルに書きこむ
    fout << "Hello\n";
    fout << "Goodbye\n";
    cout << "ファイルに書き込みました\n";

    //ファイルをクローズする
    fout.close();
    cout << "ファイルをクローズしました\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ