#include <iostream>
#include <string>


int main(){

    char *p; // ポインタ
    char str[] = "abcde";
    
    p = str;

    std::cout << str <<'\n'; 
    // abcde
    std::cout << str[3] <<'\n';
    // d
    std::cout << &str <<'\n';
    // 0x555d49680260
    std::cout << &str[0] <<'\n';
    // 0x555d49680260

    std::cout << *p <<'\n'; // 先頭のアドレスにある要素
    // a
    std::cout << p[3] <<'\n'; // 3番目のアドレスにある要素
    // d
    std::cout << p <<'\n'; // char配列全体
    // abcde
    //char型の配列のポインタの先頭要素のアドレスが欲しいとき
    std::cout << &p <<'\n';  // 先頭のアドレス
    // 0x555d49680260
    std::cout << &p+1 <<'\n'; //先頭の次のアドレス
    // 0x555d49680261

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ