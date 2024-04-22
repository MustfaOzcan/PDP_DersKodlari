#ifndef DAIRE_H
#define DAIRE_H

#include "Sekil.h"

struct DAIRE{

Sekil super;//üst sinifa erisim
double yaricap;
//fonks gostericisi
void (*delete_Daire)(struct DAIRE*);

};
typedef struct DAIRE* Daire;

Daire new_Daire(char*,double);
double alanDaire(const Daire);
double cevreDaire(const Daire);
void delete_Daire(const Daire);



#endif