#include <iostream>
using namespace std;
int main(){
    double tall, weight;
    cout << "身長と体重を入力してください\n";
    cin >> tall >> weight;
    cout << "身長は" << tall << "センチです\n";
    cout << "体重は" << weight << "キロです\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ