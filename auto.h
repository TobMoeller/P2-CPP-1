#ifndef AUTO_H
#define AUTO_H

class Auto
{
    public:
        Auto(); // constructor ctor
        ~Auto(); // destructor dtor

        void setGeschwindigkeit(int kmh);
        int getGeschwindigkeit();
        void setKilometerstand(int km);
        int getKilometerstand();

        void beschleunigen(int kmh);
        void bremben(int kmh);

    protected:
    private:

        int geschwindigkeit;
        int kilometerstand;

};

#endif // AUTO_H
