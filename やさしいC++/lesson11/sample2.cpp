#include <iostream>
#include <string>
using namespace std;

/*
struct 構造体型名{
    型名　識別子
    型名　識別子
};
で宣言できる
*/
struct Car{
    int num;
    double gas;
};

int main(){
    //"構造体型名　変数名;"で構造体変数ができる
    Car car1, car2 = {23, 1.9}, car3;

    //ドット演算子"."を使い"構造体変数名.メンバ"でメンバにアクセスできる
    car1.num = 114514;
    car1.gas = 1919.810;

    car3 = car1;
    
    cout << "car1.num=" << car1.num << ", car1.gas" << car1.gas << '\n';
    cout << "car2.num=" << car2.num << ", car2.gas" << car2.gas << '\n';
    cout << "car3.num=" << car3.num << ", car3.gas" << car3.gas << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ