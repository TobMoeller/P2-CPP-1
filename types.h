#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

typedef struct {
    char description[50];
    void (*function)();
} daily;

void switchDay();
void caseProgram(daily [], int, void (*)());

#endif // TYPES_H_INCLUDED
