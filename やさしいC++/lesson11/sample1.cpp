#include <iostream>
#include <string>
using namespace std;

 //enum 列挙型名　{識別子１(格納できる値)1, 識別子２,・・・};で宣言する
    enum week {sun, mon, tue, wed, thu, fri, sat};

int main(){
    //week型のwを宣言
    week w;
    w = sun;

    switch(w){
        case sun: cout << "日曜日です\n";
            break;
        case mon: cout << "月曜日です\n";
            break;
        case tue: cout << "火曜日です\n";
            break;
        case wed: cout << "水曜日です\n";
            break;
        case thu: cout << "木曜日です\n";
            break;
        case fri: cout << "金曜日です\n";
            break;
        case sat: cout << "土曜日です\n";
            break;
        default: cout << "正常な値ではありません\n";
            break;
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ