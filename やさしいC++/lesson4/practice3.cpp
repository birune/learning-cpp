#include <iostream>
using namespace std;
int main(){
    int i, score[5], sum=0;
    double average;
    for(i=1;i<=5;i++){
        cout << i << "教科目の点数を入力してください\n";
        cin >> score[i];
        sum += score[i];
    }
    //cout << sum << "\n";
    average = (double)sum/i;
    cout << "平均は" << average << "点です\n";
    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ