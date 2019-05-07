#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int num;
        double gas;
    public:
        //デフォルト引数を利用することで引数の名場合のコンストラクタを定義する必要がなくなる
        Car(int n = 0, double g = 0.0);
        void SetNumGas(int n, double g);
        void show();
        int GetNuM(){return num;}
        double GetGas(){return gas;}
};

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

int main(){

   Car mycars[3];

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ