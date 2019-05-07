#include <iostream>
using namespace std;

int main(){
    //初期化の仕方が少し独特だから覚える
    int test[2][5] = {
        {0, 1, 2, 3, 4},
        {10, 11, 12, 13, 14}
    };

    for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            cout << "test[" << i << "][" << j <<"]の値は" << test[i][j] << "です\n";
        }
    }

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ