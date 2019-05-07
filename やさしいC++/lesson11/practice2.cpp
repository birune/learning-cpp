#include <iostream>
#include <string>
using namespace std;

struct Person{
    int age;
    double height;
    double weight;
};

void aging(Person *p);

int main(){

    Person my_person;
    cout << "年齢を入力してください\n";
    cin >> my_person.age;
    cout << "身長を入力してください\n";
    cin >> my_person.height;
    cout << "体重を入力してください\n";
    cin >> my_person.weight;

    cout << "年齢" << my_person.age;
    cout << "身長" << my_person.height;
    cout << "体重" << my_person.weight << '\n';

    aging(&my_person);

    return 0;
}

void aging(Person *p){
    cout << "1年経過しました\n";

    cout << "年齢" << p->age+1;
    cout << "身長" << p->height;
    cout << "体重" << p->weight;
    
}

//g++ ファイル名 --input-charset=utf-8 --exec-charset=cp932
//日本語出力するときのやつ