#include <iostream>
using namespace std;
void buy(int x);
//関数の本体で定義されている引数を仮引数(この場合は"x")という
void buy(int x){
    cout << x << "円の車を買いました\n";
}
int main(){
    int num;
    cout << "1台目はいくらの車を買いますか\n";
    cin >> num;
    //関数の呼び出し元から渡される引数を実引数(この場合は"num")という
    //実際に渡されるのは"num"の中の値であり、このような引数の渡し方を値渡しという
    buy(num);
    cout << "2台目はいくらの車を買いますか\n";
    cin >> num;
    buy(num);

    return 0;

}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ