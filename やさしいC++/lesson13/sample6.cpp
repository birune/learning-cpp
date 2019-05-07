#include <iostream>
#include <string>
using namespace std;
/*
静的データメンバとはクラス全体で扱うデータを格納しておくデータメンバ
"static 型名　変数名"で宣言し
"型名 クラス名::変数名 = 値"で初期化する
*/

/*
静的メンバ関数とはそのクラスからオブジェクトが作成されていなくても
呼び出すことのできるメンバ関数
静的でないデータメンバにはアクセスできない
"static 戻り値の型　関数名(引数リスト)"で宣言し
"クラス名::関数名(引数リスト)"で呼び出す
*/
class Car{
    private:
        int num;
        double gas;
    public:
        //静的データメンバの宣言
        static int sum;
        Car(int n = 0, double g = 0.0);
        void SetNumGas(int n, double g);
        void show();
        int GetNuM(){return num;}
        double GetGas(){return gas;}
        //静的メンバ関数の宣言
        static void showSum();
};

Car::Car(int n, double g){
    num = n;
    gas = g;
    cout << "num=" << num << ", gas=" << gas <<"の車を作成しました\n";
    //車の作成時にsumを一つ増やす
    sum++;
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

void Car::showSum(){
    cout << "車は全部で" << sum << "台あります\n";
}

//静的データメンバの初期化
int Car::sum = 0;

int main(){

    Car::showSum();

    Car car1;
    car1.SetNumGas(1234, 20.5);

    Car::showSum();

    Car car2(4567, 20.9);

    Car::showSum();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ