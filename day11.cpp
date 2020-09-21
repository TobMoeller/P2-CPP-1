#include <iostream>
#include <string>
#include "types.h"
#include "day11.h"

using namespace std;



void day11fussball() {
    /*
        Aufgabe 05_05_T2
        Ein Verein besteht aus vielen als Mitgliedern. Alle Mitglieder sind Spielern.
        Die Spieler lassen sich in St¸rmer, Mittelfeldspieler, Verteidiger und Torh¸ter einteilen.
        Alle Spieler haben eine Mitgliedsnummer, einen Vornamen und einen Nachnamen.
        Bei Mittelfeldspielern sind die gespielten P‰sse interessant, bei den Verteidigern die
        gewonnenen Zweik‰mpfe, bei den Torh¸tern die gehaltenen B‰lle und bei den St¸rmern die geschossenen Tore.

        Erstellen Sie ein Klassendiagramm und implementieren Sie die Klassen in C++
    */

    // geht nicht, da Spieler eine abstrakte Klasse ist
//    Spieler *spieler0 = new Spieler(1, "testi", "testiii");
    Spieler *spieler1 = new Stuermer(1, "G¸nther", "G¸nsen");
    Spieler *spieler2 = new Stuermer(2, "Manu", "Mansen");
    Spieler *spieler3 = new Mittelfeldspieler(3, "Andy", "Ando");
    Spieler *spieler4 = new Mittelfeldspieler(23, "Bernd", "Bonno");
    Spieler *spieler5 = new Verteidiger(5, "Carsten", "Carlson");
    Spieler *spieler6 = new Verteidiger(8, "Daniel", "Dau");
    Spieler *spieler7 = new Torhueter(25, "Erich", "Ernst");
    Spieler *spieler8 = new Torhueter(12, "Freddy", "Freundlich");
    Verein *verein1 = new Verein();
    spieler1->addScore(5);
    spieler2->addScore(2);
    spieler3->addScore(3);
    spieler4->addScore(12);
    spieler5->addScore(4);
    spieler6->addScore(4);
    spieler7->addScore(5);
    verein1->createMitglied(spieler1);
    verein1->createMitglied(spieler2);
    verein1->createMitglied(spieler3);
    verein1->createMitglied(spieler4);
    verein1->createMitglied(spieler5);
    verein1->createMitglied(spieler6);
    verein1->createMitglied(spieler7);
    verein1->createMitglied(spieler8);
    cout << verein1->getMitglieder();

}


void day11() {
    daily day[] = {
        "Exit Program", switchDay,
        "Tag 11 Fuﬂball (05_05_T2)", day11fussball,
    };
    int laenge = sizeof(day)/ sizeof(day[0]);

    caseProgram(day, laenge, day11);

}
