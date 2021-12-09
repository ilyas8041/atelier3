#include <iostream>
using namespace std;
class personne
{
private:
    string nom;
    string prenom;
    string datenaissance;
public:
    personne(string n,string p,string d){
        nom=n;
        prenom=p;
        datenaissance=d;
    }
    void afficher(){
        cout<<"personne: "<<nom <<" "<<prenom <<" "<<datenaissance <<endl;
    }
};
class employe:public personne{
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
public:
    employe(string n,string p,string d,double s): personne(n,p,d)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
    }
    void afficher(){
        cout<<"employe: "<<nom <<" "<<prenom <<" "<<datenaissance <<" "<<salaire <<endl;
    }
};
class chef:public employe{
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
    string service;
public:
    chef(string n,string p,string d,double s,string Ser): employe(n,p,d,s)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
        service=Ser;
    }
    void afficher(){
        cout<<"chef: "<<nom <<" "<<prenom <<" "<<datenaissance <<" "<<salaire <<" "<<service <<endl;
    }
};
class directeur:public chef{
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
    string service;
    string societe;
public:
    directeur(string n,string p,string d,double s,string Ser,string Soc): chef(n,p,d,s,Ser)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
        service=Ser;
        societe=Soc;
    }
    void afficher(){
        cout<<"directeur: "<<nom <<" "<<prenom <<" "<<datenaissance <<" "<<salaire <<" "<<service <<" "<<societe <<endl;
    }
};


int main()
{

    personne p1("NOM","prenom","31/12/1999");
    p1.afficher();
    employe e1("NOM","prenom","31/01/1999",10000);
    e1.afficher();
    chef c1("NOM","prenom","31/02/1989",20000,"SERVICE");
    c1.afficher();
    directeur d1("NOM","prenom","31/03/1979",30000,"SERVIVCE","SOCIETE");
    d1.afficher();

}