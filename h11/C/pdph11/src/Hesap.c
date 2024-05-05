#include "Hesap.h"


Hesap new_Hesap()
{
    Hesap this;
    this=(Hesap)malloc(sizeof(struct HESAP));
    this->bakiye=0;
    //fonks gostericisi
    this->paraYatir=&paraYatir;
    this->paraCek=&paraCek;
    this->getBakiye=&getBakiye;
    this->delete_Hesap=&delete_Hesap;
    return this;

}
void paraYatir(const Hesap this,double miktar){
    if(miktar<=0) throw;
    this->bakiye+=miktar;
}
void paraCek(const Hesap this,double miktar){
     if(miktar>this->bakiye||miktar<=0) throw;
    this->bakiye-=miktar;
}
double getBakiye(const Hesap this){
    return this->bakiye;
    
}
void delete_Hesap(const Hesap this){
    if(this!=NULL)
    {
        free(this);
    } 
}

