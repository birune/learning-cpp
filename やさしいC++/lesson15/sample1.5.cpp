#include <iostream>
#include <string>
using namespace std;

class Number{
    private:
        int num;
    public:
        //変換コンストラクタ
        //引数が一つのコンストラクタ
        Number(int n = 0){num = n;}
        //変換関数
        //"operator 型名()"で定義する
        //クラス変数→変数の変換ができるようになる
        //戻り値は変数関数の型名である事が明らかなので指定しなくてもよい
        operator int(){return num;}
};

int main(){

    Number n;
    int i = 5;
    //変換関数を定義しているのでできる
    n = i;

    Number m(4);
    int j;
    //変換コンストラクタを定義しているのでできる
    j = m;

    cout << n << '\n' << j << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ