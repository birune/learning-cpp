#include <iostream>
#include <string>
using namespace std;

/*
class クラス名{
    public:　//アクセス指定子
        変数や関数の宣言
};
*/

class Car{
    public:
        int num;
        double gas;
        void show();
};

/*
戻り値の型 クラス名::メンバ関数名{}
*/

void Car::show(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
}

int main(){
    //クラス型の変数をオブジェクトまたはインスタンスという
    Car car1;

    car1.num = 1234;
    car1.gas = 20.5;

    car1.show();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ