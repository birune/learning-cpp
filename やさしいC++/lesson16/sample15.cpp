#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;


//argcは入力した文字列の個数を受け取る(a.exeも含む)
//argvは入力した文字列を受け取る
int main(int argc, char *argv[]){

    if(argc != 2){
        cout << "パラメータの数が違います\n";
        return 1;
    }
    ifstream fin(argv[1]);
    if(!fin){
        cout << "ファイルをオープンできませんでした\n";
        return 1;
    }

    char ch;

    //end of fileまで
    while(!fin.eof()){
        //ファイルから1文字ずつ読み込む
        fin.get(ch);
        cout.put(ch);
    }

    fin.close();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ