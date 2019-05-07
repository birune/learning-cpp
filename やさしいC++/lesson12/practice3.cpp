#include <iostream>
#include <string>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        void setX(int a);
        void setY(int b);
        int getX(){return x;}
        int getY(){return y;}
};

void Point::setX(int a){
    if(a>=0 && a<=10){
        x = a;
    }else{
        cout << "it value has issue\n";
        x = 0;
    }
}

void Point::setY(int b){
    if(b>=0 && b<=10){
        y = b;
    }else{
        cout << "it value has issue\n";
        y = 0;
    }
}

int main(){

    Point point1;
    int a, b;

    cout << "plz input x\n";
    cin >> a;
    point1.setX(a);

    cout << "plz input y\n";
    cin >> b;
    point1.setY(b);

    cout << "you input point is (" << point1.getX() << "." << point1.getY() << ")\n";

    return 0;
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ