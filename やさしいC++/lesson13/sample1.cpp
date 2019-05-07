#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        //コンストラクタの宣言時は戻り値を考える必要はない
        Car();
        void SetNumGas(int n, double g);
        void show();
        int GetNuM(){return num;}
        double GetGas(){return gas;}
};

//オブジェクトが作成されるときに自動的に呼び出される特殊なメンバ関数をコンストラクタという
//コンストラクタではクラスのメンバの初期化を行う
//必ずしもコンストラクタを定義する必要はないがミスを減らすことができる
/*
クラス名::クラス名(){
    データの初期化など
}
*/
Car::Car(){
    num = 0;
    gas = 0;
    cout << "車を作成しました\n";
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

int main(){

    Car car1;

    car1.show();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ