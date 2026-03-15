//Seja o seguinte trecho de programa:

#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    return 0;
}
/*
Qual é o valor das seguintes expressões ?
• p = &i            R: 3
• *p - *q           R: -2
• **&p              R: 3
• 3* - *p/(*q)+7    R: 6
*/