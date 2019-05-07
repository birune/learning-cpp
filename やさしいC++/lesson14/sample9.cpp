/*
            →  基本クラス0の派生クラス1
基本クラス0                             →  クラス1, 2を基本クラスとする派生クラス3
            →  基本クラス0の派生クラス2

としたい場合、クラス3は基本クラス1, 2を通してクラス0のメンバを2つ持つことになる
これを解決するにはクラス1, 2の定義時にクラス0を仮想基本クラスとしなければならない
*/

#include <iostream>
#include <string>
using namespace std;

//Base0クラスの宣言
class Base0{
    protected:
        int bs0;
    public:
        Base0(int b0=0){bs0 = b0;}
        void showBs0();
};

//Base1クラスの宣言
/*
"class 派生クラス名 : アクセス指定子 virtual 基本クラス名{}"
で仮想基本クラスとして継承する
*/
class Base1 : public virtual Base0{
    protected:
        int bs1;
    public:
        Base1(int b1=0){bs1 = b1;}
        void showBs();
        void showBs1();
};

//Base2クラスの宣言
class Base2: public virtual Base0{
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

//Base0クラスのメンバ関数の定義
void Base0::showBs0(){
    cout << "bs0は" << bs0 << "です\n";
}

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

    drv.showBs0();

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ