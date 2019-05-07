#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Car{
    private:
        int num;
        double gas;
        char *pName;
    public:
        Car(char* pN ,int n, double g);
        ~Car();
        void show();
        /*
        コピーコンストラクタには
        オブジェクトがほかのオブジェクトで初期化される際に
        行わなければならない処理を書く
        "クラス名::クラス名(const クラス名 &引数){}"で定義する　//参照型
        */
        Car(const Car &c);
        /*
        代入演算子をオーバーロードさせて
        オブジェクトにほかのオブジェクトが代入される際に
        行わなければならない処理を書く
        "クラス名& クラス名::operator=(const クラス名 &引数)"　//参照型
        */
        Car& operator=(const Car &c);
};

Car::Car(char* pN, int n, double g){
    pName = new char[strlen(pN) + 1];
    strcpy(pName, pN);
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
Car::Car(const Car &c){
    cout << c.pName << "で初期化します\n";
    //コピー先のオブジェクトのためにメモリを確保する //初期化なのでもともとメモリを確保していない
    pName = new char[strlen(c.pName)+1+strlen("のコピー1")+1];
    strcpy(pName, c.pName);
    strcat(pName, "のコピー1");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car &c){
    cout << pName << "に" << c.pName << "を代入します\n";
    //コピー先のオブジェクト自身による代入を防ぐ
    if(this != &c){
        delete[] pName; //代入なのでもともとのメモリが確保してある
        pName =  new char[strlen(c.pName)+1+strlen("のコピー2")+1];
        strcpy(pName, c.pName);
        strcat(pName, "のコピー2");
        num = c.num;
        gas = c.gas;
    }
    //演算子として使用しているので必ず戻り値が必要
    return *this;
}

int main(){

    Car mycar("mycar", 1234, 20.5);
    //car1をmycarで初期化
    Car car1 = mycar;

    Car car2("car2", 0, 0);
    //car2にmycarを代入
    car2 = mycar;

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ