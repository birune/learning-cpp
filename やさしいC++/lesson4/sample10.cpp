#include <iostream>
using namespace std;
int main(){
    int diameter = 2;
    double pi = 3.14;
    /*演算子に異なる型のオペランドを記述した場合
    一方のオペランドを大きなサイズのほうに型変換してから演算を行う*/
    cout << "直径が" << diameter << "の円の円周は" << diameter*pi << "です\n";

    int num1 = 3, num2 = 2;
    double division;
    //divisionはdouble型だがnumはint型なので計算結果の小数点は省かれる
    division = num1 / num2;
    cout << division << "\n";

    //(型名)変数でその行でのみ変数の型を変換できる
    division = (double)num1 / (double)num2;
    cout << division << "\n";

    //この時のnumはint型のままである
    division = num1 / num2;
    cout << division << "\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ