#include "Kare.h"

//kare olustur
Kare new_Kare(char*renk,double kenar){
    Kare this;
    this=(Kare)malloc(sizeof(struct KARE));

    this->super=new_Sekil(renk);//üst siniftan sekil olustur
    this->kenar=kenar;
//fonks gosterici atamasi 
    this->super->alan=&alan_Kare;
    this->super->cevre=&cevre_Kare;
    this->delete_Kare=&delete_Kare;
return this;
}
double alan_Kare(const Kare this){
    return this->kenar*this->kenar;
}
double cevre_Kare(const Kare this){
    return 4*this->kenar;
}
void delete_Kare(const Kare this){
    if(this==NULL) 
    {
       return;     
    }
    this->super->delete_Sekil(this->super);//once sekili yok et
    free(this);//sonra kareyi yok et
}