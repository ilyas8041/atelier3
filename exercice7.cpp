#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
public:
    float x;
    float y;
    float z;


    vecteur3d(float a = 0, float b = 0, float c = 0)  {
        x = a;
        y = b ;
        z = c ;
    }


    void afficher() {
        cout << "("<<x<<","<<y<<","<<z<<")" << endl;
    }


    vecteur3d somme( vecteur3d v) {
        vecteur3d s;
        s.x = x + v.x;
        s.y = y + v.y;
        s.z = z + v.z;
        return s;
    }

    float produit( vecteur3d v) {
        return x*v.x + y*v.y + z*v.z;
    }

    vecteur3d( vecteur3d & v) {
        x = v.x;
        y = v.y;
        z = v.z;
    }


    bool coincide( vecteur3d v) {
        return (x == v.x && y == v.y && z == v.z);
    }

    float norme() {
        return sqrt(x*x + y*y + z*z);
    }

    vecteur3d normax(vecteur3d v) {
        if( this->norme() > v.norme())
            return *this;
        return v;
    }

    vecteur3d * normax(vecteur3d * v) {
        if( this->norme() > v->norme())
            return this;
        return v;
    }

    vecteur3d & normaxR(vecteur3d &v) {
        //v1.normaxR(v2)
        if( this->norme() > v.norme())
            return *this;
        return v;
    }
};
int main() {
    vecteur3d v1(4,2,5);
    cout << "Vecteur V1";
    v1.afficher();
    vecteur3d v2(1,3,5);
    cout << "Vecteur V2";
    v2.afficher();
    cout<<endl;
    cout << "La somme des vecteurs v1 et v2 est : ";
    (v1.somme(v2)).afficher();
    cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
    cout<<endl;
    vecteur3d v3(v1);
    cout << "Vecteur V3";
    v3.afficher();
    if(v1.coincide(v3))
        cout << "Les vecteurs v1 et v3 coincident " << endl;
    else
        cout << "Les vecteurs v1 et v3 ne coincident pas " << endl;

    cout<<endl;
    cout << "Le vecteur qui a la plus grande norme (par valeur) est : ";
    (v1.normax(v2)).afficher();
    cout << "Le vecteur qui a la plus grande norme (par adresse) est : ";
    (v1.normax(&v2))->afficher();
    cout << "Le vecteur qui a la plus grande norme (par reference) est  :";
    (v1.normaxR(v2)).afficher();
    cout<<endl;
}
