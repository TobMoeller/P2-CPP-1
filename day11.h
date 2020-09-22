#ifndef DAY11_H_INCLUDED
#define DAY11_H_INCLUDED
#include <string>

// Spieler (abstract parent-class)

class Spieler {
private:
    int mitgliedsnummer;
    std::string vorname;
    std::string nachname;
    std::string position;
public:
    Spieler(int mitgliedsnummer, std::string vorname, std::string nachname, std::string position) {
        this->mitgliedsnummer = mitgliedsnummer;
        this->vorname = vorname;
        this->nachname = nachname;
        this->position = position;
    }
    virtual ~Spieler() {}

    std::string getName() { return vorname + " " + nachname; }
    std::string getPosition() { return position; }

    virtual int getScore() = 0;
    virtual void addScore(int) = 0;
};

// Spielerpositionen (child-classes)

class Stuermer : public Spieler {
private:
    int geschosseneTore;
public:
    Stuermer(int mitgliedsnummer, std::string vorname, std::string nachname) : Spieler(mitgliedsnummer, vorname, nachname, "Stürmer") {}
    virtual ~Stuermer() {}
    int getScore() { return geschosseneTore; }
    void addScore(int tore) { geschosseneTore = tore; }
};

class Mittelfeldspieler : public Spieler {
private:
    int anzahlPaesse;
public:
    Mittelfeldspieler(int mitgliedsnummer, std::string vorname, std::string nachname) : Spieler(mitgliedsnummer, vorname, nachname, "Mittelfeldspieler") {}
    virtual ~Mittelfeldspieler() {}
    int getScore() { return anzahlPaesse; }
    void addScore(int paesse) { anzahlPaesse = paesse; }
};

class Verteidiger : public Spieler {
private:
    int gewonneneZweikaempfe;
public:
    Verteidiger(int mitgliedsnummer, std::string vorname, std::string nachname) : Spieler(mitgliedsnummer, vorname, nachname, "Verteidiger") {}
    virtual ~Verteidiger() {}
    int getScore() { return gewonneneZweikaempfe; }
    void addScore(int gewZK) { gewonneneZweikaempfe = gewZK; }
};

class Torhueter : public Spieler {
private:
    int gehalteneBaelle;
public:
    Torhueter(int mitgliedsnummer, std::string vorname, std::string nachname) : Spieler(mitgliedsnummer, vorname, nachname, "Torhüter") {}
    virtual ~Torhueter() {}
    int getScore() { return gehalteneBaelle; }
    void addScore(int gehBaelle) { gehalteneBaelle = gehBaelle; }
};


// Klasse Verein aggregiert Klasse Spieler

class Verein {
private:
    Spieler *mitglieder[10];
    int MAX = 10;
    int aktuell = 0;
public:
    Verein() {}
    ~Verein() {}
    void createMitglied(Spieler *spieler);
    std::string getMitglieder();
};

#endif // DAY11_H_INCLUDED
