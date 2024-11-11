#include <stdio.h>
#include <math.h>
int main(){
    double ang, medesc, dist;

    //Scan do angulo
    printf("Digite o valor do angulo, em graus: ");
    scanf("%lf",&ang);

    //Scan da distancia da escada ate a parede
    printf("Digite o valor da distancia :");
    scanf("%lf",&dist);

    //Calculo da medida da escada
    ang = ang *M_PI / 180.0;
    medesc = dist / cos(ang);

    printf("A medida da escada e: %.2lf", medesc);
}