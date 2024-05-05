#ifndef HESAP_H 
#define HESAP_H 

#include "stdio.h"
#include "setjmp.h"
#include "stdlib.h"

jmp_buf jumper;

#define try do{ if (!setjmp(jumper)) {
#define catch }else{
#define tryEnd } }while(0)
#define throw longjmp(jumper,1)


struct HESAP{

    double bakiye;
//fonks gostericisi
void (*paraYatir)(struct HESAP*,double);
void (*paraCek)(struct HESAP*,double);
double (*getBakiye)(struct HESAP*);
void (*delete_Hesap)(struct HESAP*);
};
typedef struct HESAP* Hesap;

Hesap new_Hesap();
void paraYatir(const Hesap,double);
void paraCek(const Hesap,double);
double getBakiye(const Hesap);
void delete_Hesap(const Hesap);

#endif