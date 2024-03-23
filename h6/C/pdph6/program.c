#include "stdio.h"
#include "stdarg.h"//: Değişken sayıda argüman 

typedef enum BOOL{false,true}boolean;//C boolean icermez, biz tanimladik

// "..." Değişken sayıda argüman alabilmek için kullanılır
boolean asalmi(int parametreAdedi,...){
   
    va_list valist;
    va_start(valist,parametreAdedi);
    int sayi=va_arg(valist,int);
    if(parametreAdedi==1) //ilk defa disaridan cagirilmis
    {
        
        return asalmi(2,sayi,2);//parametre sayisi(2), sayi, 2 ile bolmeye basla
    }
    int bolen=va_arg(valist,int);
    if(bolen==sayi) return true;
    if(sayi%bolen==0) return false;
    return asalmi(2,sayi,bolen+1);

}




int main()
{
   


    int sayi;
    printf("sayi gir:");
    scanf("%d",&sayi);
    if (asalmi(1,sayi))  printf("sayi asaldir.");  
    else  printf("sayi asal degil.");
    
    return 0; 


}
