#include <iostream>
#include <string>
using namespace std;

class Car{
    //protectedに指定したメンバは派生メンバからアクセスできる
    protected:
        int num;
        double gas;
    public:
        Car(int n = 0, double g = 0);
        void SetNumGas(int n, double g);
        void show();
        //virtualの付く関数を仮想関数といい
        //ポインタが指しているオブジェクトの型に応じて
        //適切なメンバ関数が呼び出される
        virtual void show2();
};

class RacingCar : public Car{
    private:
        int course;
    public:
        RacingCar(int c = 0);
        void setCourse(int c);
        void show();
        void show2();
};
//基本クラスのメンバ関数の定義
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
void Car::show2(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
}
//派生クラスのメンバ関数の定義
RacingCar::RacingCar(int c){
    course = c;
    cout << "コース番号" << c << "のレーシングカーを作成しました\n";
}
void RacingCar::setCourse(int c){
    course = c;
    cout << "コース番号を" << c << "に変更しました\n";
}
void RacingCar::show(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
    cout << "コース番号は" << course << "です\n";
}
void RacingCar::show2(){
    cout << "車のナンバーは" << num << "です\n";
    cout << "ガソリン量は" << gas << "です\n";
    cout << "コース番号は" << course << "です\n";
}


int main(){
    Car* pCars[2];

    Car car1;
    RacingCar rccar1;

    pCars[0] = &car1;
    pCars[0]->SetNumGas(1234, 20.5);
    //基本クラスのポインタに派生クラスのアドレスを代入しても
    //派生クラスのオブジェクトを指すことができる
    pCars[1] = &rccar1;
    pCars[1]->SetNumGas(5678, 40.0);
    //仮想関数にしていない関数をオーバーライドしていると
    //基本クラスの関数が呼び出される
    for(int i=0; i<2; i++){
        pCars[i]->show();
    }
    //仮想関数にオーバーライドすると
    //ポインタが指すオブジェクトの型に応じて適切なメンバ関数が呼び出される
    for(int i=0; i<2; i++){
        pCars[i]->show2();
    }


    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ