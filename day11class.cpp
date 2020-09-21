#include "day11.h"
#include <iostream>

using namespace std;

void Verein::createMitglied(Spieler *spieler) {
    if (aktuell < MAX) {
        mitglieder[aktuell] = spieler;
        aktuell++;
    }
}

string Verein::getMitglieder() {
    string ausgabe = "";
    for (int i = 0; i < aktuell; i++) {
        ausgabe += "\nSpieler: \"" + mitglieder[i]->getName() + "\" mit Score: " + to_string(mitglieder[i]->getScore());
    }
    return ausgabe;
}
