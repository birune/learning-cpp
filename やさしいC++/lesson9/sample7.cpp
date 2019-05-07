#include <iostream>
using namespace std;

//仮引数として配列を用意する
double average(int t[]);
double paverage(int *pT);
double paverage2(int *pT);
int main(){

    int test[5];

    cout << "5人のテストの点数を入力してください\n";
    for(int i = 0; i < 5; i++){
        cin >> test[i];
    }

    //配列名(配列の先頭要素のアドレス)を実引数として渡す
    double ave = average(test);
    double pave = paverage(test);
    double pave2 = paverage2(test);
    cout << "5人の平均点は" << ave << "点です\n";
    cout << "5人の平均点は" << pave << "点です\n";
    cout << "5人の平均点は" << pave2 << "点です\n";

    return 0;
}
//何通りのか書き方ができる
double average(int t[]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += t[i];
    }
    return sum / 5;
}

double paverage(int *pT){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += *(pT + i);
    }
    return sum / 5;
}

double paverage2(int *pT){
     int sum = 0;
    for(int i = 0; i < 5; i++){
        //ポインタと配列が密接な関係を持つときに限り
        //"ポインタ[i]"でポインタの指す要素のi先の要素を表す
        sum += pT[i];//"*"はつかないので注意
    }
    return sum / 5;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ