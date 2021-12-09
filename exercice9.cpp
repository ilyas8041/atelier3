#include<iostream>
using namespace std;
class Test {
public:

    void call() {
        static int i=1;
        cout << "la fonction 'call'  a ete appelle " << i++ << " fois" << endl;}};


int main(){
    Test test;
    test.call();
    test.call();

    return 0;
}
