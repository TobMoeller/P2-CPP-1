#include <iostream>
#include "auto.h"

using namespace std;

int main()
{
    Auto *auto1 = new Auto();
    Auto *auto2 = new Auto();

    auto1->setKilometerstand(0);
    auto1->setGeschwindigkeit(100);
    auto1->beschleunigen(150);

    auto2->setKilometerstand(99999);
    auto2->setGeschwindigkeit(99);
    auto2->beschleunigen(150);

    cout << "Auto1: " << endl <<
            "km-Stand: " << auto1->getKilometerstand() << endl <<
            "Geschwindigkeit: " << auto1->getGeschwindigkeit() << endl;

    cout << "Auto2: " << endl <<
            "km-Stand: " << auto2->getKilometerstand() << endl <<
            "Geschwindigkeit: " << auto2->getGeschwindigkeit() << endl << endl;


    cout << "Hello world!" " test1" << endl << "test2" << endl; //mit using namespace std;
    std::cout << "Hello world!" << std::endl; //ohne using namespace std;
    return 0;
}
