#include<iostream>
using namespace std;
class Test {
public:

    void call() {
        static int i=1;


int main(){
    Test test;
    test.call();
    test.call();
cout << "la fonction 'call'  a ete appelle " << i++ << " fois" << endl;}};
    return 0;
}
