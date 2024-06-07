#include <iostream>
using namespace std;

class Hewan {
    public:
    void predator () {
    cout << "hewan ini predator" << endl;
    }
    void taring () {
    cout << "hewan ini bertaring" << endl;
    }
    void cakar () {
    cout << "hewan ini memiliki cakar" << endl;
    }
};
class Harimau : public Hewan {
    public:
    void Predator () {
        cout << "ini adalah harimau" << endl;
    }
};
class Singa : public Hewan {
    public:
    void Predator () {
        cout << "ini adalah Singa" << endl;
    }
};
class Macan : public Hewan {
    public:
    void Predator () {
        cout << "ini adalah macan" << endl;
    }
};

int main () {
    Harimau hrm;
    Singa sng;
    Macan mcn;

    // hrm.getHarimau ();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

    cout << endl;

    // sng.getSinga();
    sng.predator();
    sng.taring();
    sng.cakar();

    cout << endl;

    // mcn.getMacan();
    mcn.predator();
    mcn.taring();
    mcn.cakar();

    cout << endl;


    return 0;
}