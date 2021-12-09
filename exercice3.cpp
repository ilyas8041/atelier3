#include <iostream>
using namespace std;
class NUMBER {
public:
    int r1, i1, r2, i2;
    NUMBER(int reel1 , int imaginaire1, int reel2, int imaginaire2){
        r1 = reel1;
        i1 = imaginaire1;
        r2 = reel2;
        i2 = imaginaire2;
    }

    void addition(int r3, int i3) {
        r3 = r1 + r2;
        i3 = i1 + i2;
        cout << "la somme de la partie reele est :"<< r3 << endl;
        cout << "la somme de la partie imaginaire est :"<< i3 << endl;
    }
    void substraction(int r3, int i3) {
        r3 = r1 - r2;
        i3 = i1 - i2;
        cout << "la soustratction de la partie reele est :"<< r3 << endl;
        cout << "la soustraction de la partie imaginaire est :"<< i3 << endl;
    }
    void product(int r3, int i3) {
        r3 = r1 * r2;
        i3 = i1 * i2;
        cout << "la production de la partie reele est :"<< r3 << endl;
        cout << "la production de la partie imaginaire est :"<< i3 << endl;
    }
    void division(int r3, int i3) {
        r3 = r1 / r2;
        i3 = i1 / i2;
        cout << "la division de la partie reele est :"<< r3 << endl;
        cout << "la division de la partie imaginaire est :"<< i3 << endl;
    }

};
int main(){
    NUMBER N1(10,12,5,6);
    cout << "choisir l'operation : 1- addition, 2- soustraction, 3- production 4- division"<<endl;
    int op;
    cin >> op;
    switch (op) {
        case 1:
            N1.addition(0,0);
            break;
        case 2:
            N1.substraction(0,0);
            break;
        case 3:
            N1.product(0,0);
            break;
        case 4:
            N1.division(0,0);
            break;
    }



}
