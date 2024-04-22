#include "Daire.h"

//Daire olustur
Daire new_Daire(char*renk,double yaricap){
    Daire this;
    this=(Daire)malloc(sizeof(struct DAIRE));

    this->super=new_Sekil(renk);//üst siniftan sekil olustur
    this->yaricap=yaricap;
    //fonks gostericisi atamalari
    this->super->alan=&alanDaire;
    this->super->cevre=&cevreDaire;
    this->delete_Daire=&delete_Daire;
    return this;

}
//daire alani 
double alanDaire(const Daire this){
return M_PI*pow(this->yaricap,2);
}
//daire cevre
double cevreDaire(const Daire this){
    return 2*M_PI*this->yaricap;
}
void delete_Daire(const Daire this){
    if(this==NULL) return;
    this->super->delete_Sekil(this->super);//önce sekili sil
    free(this);// sonra daireyi sil
}