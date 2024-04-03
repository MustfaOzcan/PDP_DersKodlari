#ifndef KISI_H
#define KISI_H

#include "stdio.h"
#include "stdlib.h" //malloc fonks. heap

struct KISI{
char *isim;
double kilo;
double boy;
int yas;
};
typedef struct KISI* Kisi; //Kisi dedigim her yerde KISI struct turunde pointer vardir.

Kisi newKisi(char* isim,double ,double ,int );//constructer

void yemekYe(const Kisi,double);

void yaslan(const Kisi);
	
void getKilo(const Kisi);

void deleteKisi(Kisi);







#endif