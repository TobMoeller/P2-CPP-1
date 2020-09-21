#include <iostream>
#include <string>
#include "types.h"

using namespace std;

class Fahrzeug {
protected:
    string seriennummer;
    string kennzeichen;
public:
    Fahrzeug(string seriennummer, string kennzeichen) {
        this->seriennummer = seriennummer;
        this->kennzeichen = kennzeichen;
    };
    ~Fahrzeug() {};
    string getSeriennummer() { return seriennummer;};
};

class PKW : public Fahrzeug {
private:
    int leistung;
public:
    PKW(string seriennummer, string kennzeichen) : Fahrzeug(seriennummer, kennzeichen) {
    };
//    PKW(string, string);
    ~PKW();
    void setLeistung(int leistung) { this->leistung = leistung; };
    int getLeistung() { return leistung; };
    string getKennzeichen() { return kennzeichen;};
};

//PKW::PKW(string seriennummer, string kennzeichen) : Fahrzeug(seriennummer, kennzeichen) {
//
//}

class LKW : public Fahrzeug {
private:
    double tonnage;
public:
    LKW(string seriennummer, string kennzeichen) : Fahrzeug(seriennummer, kennzeichen) {
    };
    ~LKW();
    void setTonnage(double tonnage) { this->tonnage = tonnage; };
    double getTonnage() { return tonnage; };
    string getKennzeichen() { return kennzeichen;};
};


void day10auto() {
    // Aufgabe 05_04_11
    PKW *bmw = new PKW("123456789", "VB A 123");
    LKW *volvo = new LKW("987654321", "F B 456");
    bmw->setLeistung(150);
    volvo->setTonnage(8.5);

    cout << "\n\nPKW:\nLeistung: " << bmw->getLeistung() << endl
        << "Seriennummer: " << bmw->getSeriennummer() << endl
        << "Kennzeichen: \"" << bmw->getKennzeichen() << "\"" << endl;
    cout << "\n\nLKW:\nTonnate: " << volvo->getTonnage() << endl
        << "Seriennummer: " << volvo->getSeriennummer() << endl
        << "Kennzeichen: \"" << volvo->getKennzeichen() << "\"" << endl;
}

void day10() {
    daily day[] = {
        "Exit Program", switchDay,
        "Tag 10 Autoaufgabe (05_04_11)", day10auto,
    };
    int laenge = sizeof(day)/ sizeof(day[0]);

    caseProgram(day, laenge, day10);

}
