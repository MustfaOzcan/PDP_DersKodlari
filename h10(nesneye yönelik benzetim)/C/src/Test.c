#include "Daire.h"
#include "Kare.h"

int main(){

    Daire d=new_Daire("Mavi",12);
    Kare k= new_Kare("Siyah",4.5);
    char *str=d->super->toString(d->super,d);//paramtre sekil ve daire
    printf("%s",str);
    free(str);

    str=k->super->toString(k->super,k);//paramtre sekil ve kare
    printf("\n------------\n");
    printf("%s",str);
    free(str);

    d->delete_Daire(d);
    k->delete_Kare(k);
    return 0 ;
}