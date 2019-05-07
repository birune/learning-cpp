#include <iostream>
#include <string>
using namespace std;

/*
union 共用体型名{
    型名　識別子;
    型名　識別子;
};
で宣言できる
*/
//構造体型と違いすべてのメンバで同じ値を記憶する

union my_union{
    int a;
    int b;
};

int main(){

    my_union Myunion;
    Myunion.a = 3;
    cout << "Myunion.a = " << Myunion.a << ", Myunion.b = " << Myunion.b << '\n';
    Myunion.b = 1; 
    cout << "Myunion.a = " << Myunion.a << ", Myunion.b = " << Myunion.b << '\n'; 
    

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ