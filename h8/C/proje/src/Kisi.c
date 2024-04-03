#include "Kisi.h"

Kisi newKisi(char* isim,double boy,double kilo,int yas){  //constructer

	Kisi this; //Kisi turunden 'this' diye pointer olustur.

	this=(Kisi)malloc(sizeof(struct KISI));

	this->isim=isim;
	this->boy=boy;
	this->kilo=kilo;
	this->yas=yas;
	return this;
}

void yemekYe(const Kisi this ,double kalori)
{	
	
		this->kilo +=(kalori/1000);
		if(this->yas<18) this->boy+=0.5;	

}

void yaslan(const Kisi this){
	this->yas++;
}

void getKilo(const Kisi this){
	printf("kilo:%lf\n",this->kilo);
}

void deleteKisi(Kisi this){
	if(this!=NULL) free(this);
}

