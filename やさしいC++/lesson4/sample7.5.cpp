#include <iostream>
using namespace std;
int main(){
    //シフト演算子"a << b"でaを2進数でb桁左にズラし、ズラした分0を入れる
    cout << "5 << 2 = " << (5 << 2) << "\n";
    //シフト演算子"a >> b"でaを2進数でb桁右にズラし、ズラした分0を入れる
    cout << "5 >> 2 = " << (5 >> 2) << "\n";

    return 0;
}