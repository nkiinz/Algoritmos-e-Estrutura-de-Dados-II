//uri1011
#include <stdio.h>

int main(){
    int R;
    double volume;
    const double PI = 3.14159;

    scanf("%d", &R);

    volume = 4.0/3.0 * PI * R * R * R;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

//beecrowd1012
#include <stdio.h>

int main(){
    double A, B, C;
    const double PI = 3.14159;

    scanf("%lf\n%lf\n%lf", &A, &B, &C);

    printf("TRIANGULO: %.3lf\n", (A * C)/2.0);
    printf("CIRCULO: %.3lf\n", PI * C * C);
    printf("TRAPEZIO: %.3lf\n", (A + B)/2.0 * C);
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return (a + b + abs(a - b))/2;
}

//beecrowd1013
int main(){
    int a, b, c, resposta;

    scanf("%d %d %d", &a, &b, &c);
    
    resposta = maior(a, maior(b, c));

    printf("%d eh o maior\n", resposta);

    return 0;
}

//beecrowd1014
#include <stdio.h>

int main(){
    int X;
    double Y, consumo;

    scanf("%d\n%lf", &X, &Y);
    
    consumo = X/Y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}

//beecrowd1015
#include <stdio.h>
#include <math.h>
int main(){
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);

    distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("%.4lf\n", distancia);

    return 0;
}
