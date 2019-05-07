#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char string_len[100];
    char string_cat[20];
    char string_cpy1[10];
    char string_cpy2[10];

    cout << "文字列を入力してください\n";
    cin >> string_len;
    cout << "文字列の長さは" << strlen(string_len) << "です\n";
    //文字列を配列に格納するにはstrcpyが便利
    strcpy(string_cpy1, "Hello");
    strcpy(string_cpy2, "Goodbye");
    strcpy(string_cat, string_cpy1);
    strcat(string_cat, string_cpy2);

    cout << string_cpy1 << '\n';
    cout << string_cpy2 << '\n';
    cout << string_cat << '\n';

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ