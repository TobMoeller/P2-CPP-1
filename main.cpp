#include <iostream>
#include "types.h"

using namespace std;

void exitProgram();
void day9();
void day10();
void day11();


int main(void)
{
    system("chcp.com 1252");
    system("cls");
    switchDay();
}

void switchDay() {
    daily day[] = {
        "Exit Program", exitProgram,
        "Tag 9", day9,
        "Tag 10", day10,
        "Tag 11", day11,
    };
    int laenge = sizeof(day)/ sizeof(day[0]);

    caseProgram(day, laenge, switchDay);
}

void caseProgram(daily day[], int laenge, void (*function)()) {
    int caseProgram;

    cout << endl << endl << "Was möchtest du starten?";
    for (int i = 1; i < laenge; i++) {
        cout << endl << "Option (" << i << "): " << day[i].description;
    }
    cout << "\nOption (0): Exit Program\n\t";
    cin >> caseProgram;

    day[caseProgram].function(); // day1()
    function();
}

void exitProgram() {
    exit(0);
}
