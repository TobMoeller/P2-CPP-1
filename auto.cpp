#include "auto.h"

Auto::Auto()
{
    //ctor
}

Auto::~Auto()
{
    //dtor
}

int Auto::getKilometerstand() {
    return kilometerstand;
}

void Auto::setKilometerstand(int km) {
    kilometerstand = km;
}

int Auto::getGeschwindigkeit() {
    return geschwindigkeit;
}

void Auto::setGeschwindigkeit(int kmh) {
    geschwindigkeit = kmh;
}

void Auto::beschleunigen(int kmh) { // Positiv könnte man auch durch unsigned int erzwingen
    if (kmh > 0) geschwindigkeit += kmh;
}

void Auto::bremben(int kmh){
    if (kmh > 0) {
        if (kmh < geschwindigkeit)
            geschwindigkeit -= kmh;
        else geschwindigkeit = 0;
    }
}
