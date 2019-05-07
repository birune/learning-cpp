#include <iostream>
#include <string>
using namespace std;

int count(char str[], char c);

int main(){

    char str[100], c;
    cout << "文字列を入力してください\n";
    cin >> str;

    cout << "探索する文字を入力してください\n";
    cin >> c;

    cout << str << "の中には" << c << "は" << count(str, c) << "個あります\n";

    return 0;
}

int count(char str[], char c){
    int result = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c)result++;
    }
    return result;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ