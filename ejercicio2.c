#include <stdio.h>
int main()
{
    float totalcompra,valorfinal ;
    printf ("ingresar el total de la compra: ") ;
    scanf ("%f",&totalcompra) ; 
    valorfinal = totalcompra - (totalcompra * 0.15) ;
    printf ("el total de su compra fue %.2f y el valor con descuento es %.2f", totalcompra, valorfinal) ;
    return 0 ;
}