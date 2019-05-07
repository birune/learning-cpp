#include <iostream>
#include <string>
using namespace std;

class Car{
    //privateメンバはクラスの外からアクセスできない
    private:
        int num;
        double gas;
    //publicメンバはクラスの外からもアクセスできる
    public:
        void SetNumGas(int n, double g);
        void show();
        //メンバ関数の本体をクラス内で定義するとインライン関数になる
        int GetNuM(){return num;}
        double GetGas(){return gas;}
};
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

    /*
    こういう処理は出来なくなる
    car1.num = 1234;
    car1.gas = 20.5;
    */
    car1.SetNumGas(1234, 20.5);
    car1.show();
    int num;
    double gas;
    num = car1.GetNuM();
    gas = car1.GetGas();
    cout << num << '\n';
    cout << gas << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ