//O que é impresso quando as instruções em C, a seguir, são executadas?

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char s1[50] = "jack", s2[50] = "jill", s3[50];

    printf("%c%s ", toupper (s1[0]), &s1[1]);
    printf("%s ", strcpy (s3, s2));
    printf("%s ", strcat (strcat (strcpy (s3, s1), " and "), s2));
    printf("%u ", strlen (s1) + strlen (s2));
    printf("%u ", strlen (s3));

    return 0;
}

/*
(X) Jack jill jack and jill 8 13

( ) Jack jill jack and jill 9 13

( ) Jack jill Jack and jill 8 13

( ) Jack jill jackandjill 8 11

( ) jack jill jack and jill 8 13
*/