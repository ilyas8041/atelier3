#include <iostream>
using namespace std;

class MyClass{
public:
    string nom ;
    MyClass();
    ~MyClass();
};
MyClass::MyClass() {
    cout << "donnez un nom :";

}
MyClass::~MyClass() {
    cin >> nom ;
    cout << "Bonjour "<<nom << endl ;
    cout << "au-revoir "<< nom ;
}
int main(){

    MyClass Objet1;
    return 0;
}

