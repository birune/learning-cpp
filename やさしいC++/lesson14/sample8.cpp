#include <iostream>
#include <string>
using namespace std;

//Base1クラスの宣言
class Base1{
    protected:
        int bs1;
    public:
        Base1(int b1=0){bs1 = b1;}
        void showBs();
        void showBs1();
};

//Base2クラスの宣言
class Base2{
    protected:
        int bs2;
    public:
        Base2(int b2=0){bs2 = b2;}
        void showBs();
        void showBs2();
};

//Derivedクラスの宣言
/*
"class 派生クラス名 : アクセス指定子 基本クラス名1, アクセス指定子 基本クラス名2{}"
で複数のクラスからの派生クラスを作れる
*/
class Derived : public Base1, public Base2{
    protected:
        int dr;
    public:
        Derived(int d=0){dr=d;}
        void showDr();
};

//Base1クラスのメンバ関数の定義
void Base1::showBs(){
    cout << "bs1は" << bs1 << "です\n";
}
void Base1::showBs1(){
    cout << "bs1は" << bs1 << "です\n";
}

//Base2クラスのメンバ関数の定義
void Base2::showBs(){
    cout << "bs2は" << bs2 << "です\n";
}
void Base2::showBs2(){
    cout << "bs2は" << bs2 << "です\n";
}

//Derivedクラスのメンバ関数の定義
void Derived::showDr(){
    cout << "drは" << dr << "です\n";
}

int main(){

    Derived drv;

    drv.showBs1();
    drv.showBs2();
    //同じ名前のメンバ関数を持つときはスコープ解決演算子を使う
    drv.Base1::showBs();
    drv.Base2::showBs();

    drv.showDr();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ