#include <iostream>
using namespace std;

void swap(int *pX, int *pY);

int main(){
    
    int num1 = 5;
    int num2 = 10;

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";

    swap(&num1, &num2);

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";

    return 0;
}
//実引数のアドレスが関数に渡されることを参照渡しという
void swap(int *pX, int *pY){
    int temporary;
    temporary = *pY;
    *pX = *pY;
    *pY = temporary;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ