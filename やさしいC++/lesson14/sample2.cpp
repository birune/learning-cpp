#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n, double g);
        void SetNumGas(int n, double g);
        void show();
};

/*新しく拡張したクラスに既存のクラスのメンバを受け継ぐことを継承と呼び
この時、既存のクラスを基本クラス、新しいクラスを派生クラスという
"class 派生クラス名 : 基本クラス名{
    メンバ
};"　で定義する
*/

class RacingCar : public Car{
    private:
        int course;
    public:
        RacingCar(int n, double gas, int c);
        void setCourse(int c);
};
//基本クラスのメンバ関数の定義
Car::Car(){
    num = 0;
    gas = 0;
    cout << "num=0, gas=0の車を作成しました\n";
}
Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "num=" << num << ", gas=" << gas <<"の車を作成しました\n";
}
void Car::SetNumGas(int n, double g){
    if(n>0 && n<10000){
        num = n;
        cout << "ナンバーを" << num << "にしました\n";
    }else{
        cout << "適切なナンバーを入力してください\n";
    }

    if(g>0 && g<10000){
        gas = g;
        cout << "ガソリン量を" << gas << "にしました\n";
    }else{ 
    cout << "適切なガソリン量を入力してください\n";
    }
}
void Car::show(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
}
//派生クラスのメンバ関数の定義
//派生クラス名::派生クラス名() : 基本クラスのコンストラクタ名(){}で
//呼び出すコンストラクタを指定できる
RacingCar::RacingCar(int n, double g, int c) : Car(n, g){
    course = c;
    cout << "コース番号" << c << "のレーシングカーを作成しました\n";
}
void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << c << "に変更しました\n";
}



int main(){

    RacingCar rccar1(1234, 20.5, 5);

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ