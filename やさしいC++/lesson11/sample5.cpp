#include <iostream>
#include <string>
using namespace std;

struct Car{
    int num;
    double gas;
};

void show(Car *c);
void show2(Car &c);

int main(){

    Car car1 = {0, 0.0};

    show(&car1);
    show2(car1);

    return 0;
}

void show(Car *c){
    //構造体へのポインタからメンバにアクセスするにはアロー演算子"->"
    cout << "c->num=" << c->num << ", c->gas=" << c->gas << '\n';
}
void show2(Car &c){
    cout << "c.num" << c.num << ", c.gas" << c.gas << '\n';
}
//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ