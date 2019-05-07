#include <iostream>
#include <string>
#include <string.h>

using namespace std;
//デストラクタとはオブジェクトを破棄する際に必要な処理を書くメンバ関数
class Car{
    private:
        int num;
        double gas;
        string pName;
    public:
        Car(char* pN ,int n, double g);
        //デストラクタの宣言
        //引数と戻り値を持たない
        ~Car();
        void show();
};

Car::Car(char* pN, int n, double g){
    pName = new char[strlen(pN) + 1];
    pName = pN;
    num = n;
    gas = g;
    cout << pName << "を作成しました\n";
}
Car::~Car(){
    cout << pName << "を破棄します\n";
    delete[] pName;
}
void Car::show(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
    cout << "名前は" << pName << "です\n";
}

int main(){

    Car car1("mycar", 1234, 20.5);
    car1.show();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ