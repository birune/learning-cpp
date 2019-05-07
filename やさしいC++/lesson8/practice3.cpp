#include <iostream>
using namespace std;

int add_score(int &rX, int &rY, int add);

int main(){

    int x, y, add;
    cout << "2科目分の点数を入力してください\n";
    cin >> x >> y;
    cout << "加算する点数を入力してください\n";
    cin >> add;
    add_score(x, y, add);

    cout << add << "点加算したので\n";
    cout << "科目1は" << x << "点になりました\n";
    cout << "科目2は" << y << "点になりました\n";

    return 0;
}

int add_score(int &rX, int &rY, int add){
    rX += add;
    rY += add;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ