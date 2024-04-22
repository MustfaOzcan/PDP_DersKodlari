#ifndef SEKIL_H
#define SEKIL_H

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include "string.h"

struct SEKIL{
    char* renk;
    char* olusturulmaTarihi;

//fonks gostericileri
void (*setRenk)(struct SEKIL*,char* );
char* (*toString)(struct SEKIL*,void*);
double (*alan)();
double (*cevre)();
void (*delete_Sekil)(struct SEKIL*);

}; 
typedef struct SEKIL* Sekil;

Sekil new_Sekil(char *);
void setRenk(const Sekil,char* );
char* toString(const Sekil,void*);//hangi yapinin toStringi Sekil'in
void delete_Sekil(const Sekil);

#endif