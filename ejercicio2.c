#include <stdio.h>
int main()
{
    //definir los datos de entrada
    float totalcompra,valorfinal ;

    //lectura de datos
    printf ("ingresar el total de la compra: ") ;
    scanf ("%f",&totalcompra) ; 

    //calculo del valor final
    valorfinal = totalcompra - (totalcompra * 0.15) ;

    //datos de salida
    printf ("el total de su compra fue %.2f y el valor con descuento es %.2f", totalcompra, valorfinal) ;
    
    return 0 ;
}
