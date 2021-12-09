#include <iostream>
using namespace std;

class Media
{
    string titre;
public:
    virtual void imprimer()
    {

    }
    char* id();
};

class audio: public Media
{
public:
    virtual void imprimer()
    {
        cout << "je suis de classe audio."<<endl;
    }
    char *id();
};

class livre: public Media
{
public:
    void imprimer()
    {
        cout << "je suis de classe livre."<<endl;
    }
    char *id();
};

class presse: public Media
{
public:
    virtual void imprimer()
    {
        cout << "je suis de classe presse."<<endl;
    }
    char *id();
};
class cd:public audio
{
public:
    void imprimer()
    {
        cout << "je suis de class cd."<<endl;
    }
    char *id();
};
class cassette:public audio
{
public:
    void imprimer()
    {
        cout << "je suis classe cassette."<<endl;
    }
    char *id();
};
class disque:public audio
{
public:
    void imprimer()
    {
        cout << "je suis classe disque."<<endl;
    }
    char *id();
};
class magazine:public presse
{
public:
    void imprimer()
    {
        cout << "je suis de classe magazine."<<endl;
    }
    char *id();
};
class journal:public presse
{
public:
    void imprimer()
    {
        cout << "je suis de classe journal."<<endl;
    }
    char *id();
};
class revue:public presse
{
public:
    void imprimer()
    {
        cout << "je suis de  classe revue."<<endl;
    }
    char *id();
};
int main()
{
    Media* M1= new revue();
    M1->imprimer();
    Media* M2= new audio();
    M2->imprimer();
    Media* M3= new livre();
    M3->imprimer();
    return 0;
}