//O que é impresso quando as instruções em C, a seguir, são executadas?

#include <stdio.h>

typedef struct {
    char c;
    int i;
    float f;
    double d;
} sdata;

struct varios_tipos {
    sdata x;
    char c;
    int i;
    float f;
    double d;
} tdata;

int main(){
    tdata.c = 'a';
    tdata.x.c = 'b';
    tdata.i = 1234;
    tdata.x.i = 4321;
    tdata.f = 12.34;
    tdata.x.f = 43.21;
    tdata.d = 1111.1111;
    tdata.x.d = 2222.2222;
   
     printf("%c %d %.2f %.4lf ", tdata.c, tdata.i, tdata.f, tdata.d);
     printf("%c %d %.2f %.4lf", tdata.x.c, tdata.x.i, tdata.x.f, tdata.x.d);
     return 0;
}

/*
( ) [Error] expected specifier-qualifier-list before 'sdata'

( ) a 1234 12.34 1111.1111 a 1234 12.34 1111.1111

(X) a 1234 12.34 1111.1111 b 4321 43.21 2222.2222

( ) b 4321 43.21 2222.2222 b 4321 43.21 2222.2222

( ) [Error] 'struct varios_tipos' has no member named 'x'*/