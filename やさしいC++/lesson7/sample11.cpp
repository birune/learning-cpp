#include <iostream>
using namespace std;
//デフォルト引数を設定すると実引数を指定しないとデフォルト引数が仮引数に代入される
//デフォルト引数は宣言と定義のどちらかでしか設定できない(どっちかだけでいい)
//デフォルト引数は右から順に設定しなければならない
//→デフォルト引数を設定した引数の右に設定してない引数があってはならない
void buy(int x = 10);

int main(){
    cout << "一回目は100万円で購入します\n";
    buy(100);

    cout << "二回目はデフォルト金額で購入します\n";
    buy();

    return 0;
}

void buy(int x){
    cout << x << "万円の車を買いました\n";
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ