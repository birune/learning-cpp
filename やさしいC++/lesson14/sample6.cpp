#include <iostream>
#include <string>
using namespace std;
//宣言の後に"=0"をつけた仮想関数を純粋仮想関数という
//純粋仮想関数を持つクラスを抽象クラスという
//抽象クラスの変数は作成できないがポインタは作れる
//抽象クラスの派生クラスは純粋仮想関数と同じ関数でオーバーライドしなけれなばならない

//抽象クラス"vehicle"
class Vehicle{
    protected:
        int speed;
    public:
        void setSpeed(int s);
        //純粋仮想関数"show"
        virtual void show() = 0;
};

//派生クラス"Car"
class Car : public Vehicle{
    private:
        int num;
        double gas;
    public:
        Car(int n = 0, double g = 0);
        void show();
};

//派生クラス"Plane"
class Plane : public Vehicle{
    private:
        int flight;
    public:
        Plane(int f = 0);
        void show();
};

//vehicleクラスのメンバ関数の定義
void Vehicle::setSpeed(int s){
    speed = s;
    cout << "速度を" << s << "にしました\n";
    cout << '\n';
}

//Carクラスのメンバ関数の定義
Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "ナンバーは" << num << ", ";
    cout << "ガソリン量は" << gas << "の車を作成しました\n";
    cout << '\n';
}
void Car::show(){
    cout << "ナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
    cout << "スピードは" << speed << "です\n";
    cout << '\n';
}

//planeクラスのメンバ関数の定義
Plane::Plane(int f){
    flight = f;
    cout << "便" << flight << "の飛行機を作成しました\n";
    cout << '\n';
}
void Plane::show(){
    cout << "飛行機の便は" << flight << "です\n";
    cout << "スピードは" << speed << "です\n";
    cout << '\n';
}

int main(){

    Vehicle* pV[2];

    Car car1(1234, 20.0);
    pV[0] = &car1;
    pV[0]->setSpeed(60);

    Plane pln1(232);
    pV[1] = &pln1;
    pV[1]->setSpeed(500);

    for(int i=0; i<2; i++){
        pV[i]->show();
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ