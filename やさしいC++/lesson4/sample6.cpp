#include <iostream>
using namespace std;
int main(){
    int i, sum=0, num=0;
    for(i=1;i<=3;i++){
        cout << i << "番目の数字を入力してください >> ";
        cin >> num;
        //a = a + bはa += bに直せる
        sum += num;
    }
    cout << "合計は" << sum << "です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ