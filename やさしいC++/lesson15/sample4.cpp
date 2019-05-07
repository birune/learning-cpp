#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/*
template<テンプレート引数のリスト>
class クラス名{};
*/
//具体的な型名の代わりにTを仮の型名としている
template <class T>
class Array{
    private:
        T data[5];
    public:
        void setData(int num, T d);
        T getData(int num);
};

//クラステンプレートのメンバ関数の定義
template <class T>
void Array<T>::setData(int num, T d){
    if(num < 0 || num > 4){
        cout << "配列の範囲をこえています\n";
    }else{
        data[num] = d;
    }
}
template <class T>
T Array<T>::getData(int num){
    if(num < 0 || num > 4){
        cout << "配列の範囲をこえています\n";
        return data[0];
    }else{
        return data[num];
    }
}

int main(){

    cout << "int型の配列を作成します\n";
    /*
    クラステンプレートからオブジェクトを作成する時は
    "クラス名<型名> 識別子"で定義する
    */
    Array<int> i_array;//識別子 = オブジェクト名
    i_array.setData(0,0);
    i_array.setData(1,10);
    i_array.setData(2,20);
    i_array.setData(3,30);
    i_array.setData(4,40);

    for(int i=0; i<5; i++){
        cout << i_array.getData(i) << '\n';
    }

    cout << "double型の配列を作成します\n";
    Array<double> d_array;
    d_array.setData(0, 0.0);
    d_array.setData(1, 1.1);
    d_array.setData(2, 2.2);
    d_array.setData(3, 3.3);
    d_array.setData(4, 4.4);

    for(int j=0; j<5; j++){
        cout << d_array.getData(j) << '\n'; 
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ