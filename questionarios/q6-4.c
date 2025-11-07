#include <stdio.h>
#include <math.h>

float f (float par);
float g (float par);
float h (float par);

int main(){
    printf("%f", h(25));
    return 0;
}

float f(float par) {
    return 2*par;
}

float g (float par) {
    return f(sqrt(par));
}

float h (float par) {
    return pow(g(par),3);
}