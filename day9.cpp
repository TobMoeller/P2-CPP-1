#include <iostream>
#include "auto.h"
#include "types.h"

using namespace std;

void day9transcript();


void day9() {
    daily day[] = {
        "Exit Program", switchDay,
        "Tag 9 Mitschrift", day9transcript,
    };
    int laenge = sizeof(day)/ sizeof(day[0]);

    caseProgram(day, laenge, day9);
}

void day9transcript() {
    /*
        First day learning about C++, OOP (and therefore classes)
    */
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

    auto1->~Auto();
    auto2->~Auto();
    cout << auto1->getGeschwindigkeit();
}

