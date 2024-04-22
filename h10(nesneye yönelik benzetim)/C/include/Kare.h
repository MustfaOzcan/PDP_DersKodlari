#ifndef KARE_H
#define KARE_H

#include "Sekil.h"

struct KARE{
    Sekil super;//üst sinifa erisim
    double kenar;
    //fonks. gostericisi
    void(*delete_Kare)(struct KARE*);
};
typedef struct KARE* Kare;

Kare new_Kare(char*,double);
double alan_Kare(const Kare);
double cevre_Kare(const Kare);
void delete_Kare(const Kare);


#endif