/*
10 Seja vet um vetor de 4 elementos: TIPO vet[4]. Supor que depois da declaração, vet esteja armazenado no endereço de memória 1000 (ou seja, o endereço de vet[0]). Supor também que na máquina usada uma variável do tipo char ocupa 1 byte, do tipo int ocupa 4 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Qual o valor de vet+1, vet+2 e vet+3 se: 
    • vet for declarado como char?
vet + 1 → 1000 + 1 = 1001
vet + 2 → 1000 + 2 = 1002
vet + 3 → 1000 + 3 = 1003
    
    • vet for declarado como int? 
vet + 1 → 1000 + 4 = 1004
vet + 2 → 1000 + 8 = 1008
vet + 3 → 1000 + 12 = 1012

    • vet for declarado como float?
vet + 1 → 1000 + 4 = 1004
vet + 2 → 1000 + 8 = 1008
vet + 3 → 1000 + 12 = 1012

    • vet for declarado como double?
vet + 1 → 1000 + 8  = 1008
vet + 2 → 1000 + 16 = 1016
vet + 3 → 1000 + 24 = 1024
*/