#include <iostream>
using namespace std;
//実引数を変更したくないときはconstを使うと誤りが減る
void swap(int &x, int &y);

int main(){
    
    int num1 = 5;
    int num2 = 10;

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";

    swap(num1, num2);

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";

    return 0;
}
void swap(int &x, int &y){
    int temporary;
    temporary = x;
    x = y;
    y = temporary;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ