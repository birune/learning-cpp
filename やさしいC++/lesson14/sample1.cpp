#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        Car(int n = 0, double g = 0.0);
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
        RacingCar(int c = 0);
        void setCourse(int c);
};
//基本クラスの関数メンバの定義
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
//派生クラスの関数メンバの定義
RacingCar::RacingCar(int c){
    course = c;
    cout << "レーシングカーを作成しました\n";
}
void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << c << "に変更しました\n";
}


int main(){

    RacingCar rccar1;
    rccar1.SetNumGas(1234, 20.5);
    rccar1.setCourse(5);

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ