#include <stdio.h>
int main()
{
    //definir los datos de entrada
    float base, altura, area, perimetro ;

    //lectura de los datos de entrdada
    printf ("ingresar el valor de la altura") ;
    scanf ("%f",&altura) ;
    
    printf ("ingresar el valor de la base") ;
    scanf ("%f",&base) ;

    //calculo del perimetro y el area
    perimetro = 2 * (base + altura) ;
    area = base * altura ;

    //datos de salida
    printf ("el valor del  perimetro es %.2f y el valor del area es %.2f", perimetro, area) ;
    return 0 ;
}
