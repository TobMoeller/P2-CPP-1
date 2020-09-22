#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED
struct daily {
    char description[50];
    void (*function)();
};

void switchDay();
void caseProgram(daily [], int, void (*)());

#endif // TYPES_H_INCLUDED
