#include <iostream>
using namespace std;

class Animal{
public:
    string nom ;
    int age ;
    void set_value(string n , int a ){
        nom = n ;
        age = a ;
    }
};

class Zebra : public Animal {
public :
    string lieuOrigine = "Forest";
    void display()
    {
        cout << "le nom du zebra est :"<< nom << endl<< "l'age du zebra est :"<< age <<endl << "le Lieu d'origine est :"<<lieuOrigine<< endl;
    }

};
class Dolphin : public Animal {
public :
    string lieuOrigine = "Ocean";
    void display(){
        cout << "le nom du Dolphin est :"<< nom << endl<< "l'age du Dolphin est :"<< age <<endl << "le Lieu d'origine est :"<<lieuOrigine ;
    }

};

int main(){
    Zebra Zebra1 ;
    Zebra1.set_value("zebra" , 5); // exemple d'utilisation
    Zebra1.display();
    Dolphin Dolphin1 ;
    Dolphin1.set_value("Dolphin" , 10); // exemple d'utilisation
    Dolphin1.display();
    return 0 ;
}
