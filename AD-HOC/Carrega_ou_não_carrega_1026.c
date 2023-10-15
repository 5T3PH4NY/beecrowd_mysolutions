#include <stdio.h>

/*
Nesse problema temos um circuito digital
de soma onde o fio dp carry out não esta
conectado em lugar nenhum e por isso, al-
gumas operações não saem como deveriam.
desse modo: 0 + 0 = 0, 1 + 0 = 1, 0 + 1 =
1, 1 + 1 = 0 (sem estouro).

colocando essa operação em uma expresão 
lógica temos:
(-A v B) ^ (A v -B) a qual pode ser sim-
plificada em um ou exclusivo. ("^" na
linguagem c).
*/

int main(){
    long long int a, b;

    while(scanf("%lld %lld", &a, &b) != EOF){
        printf("%lld\n", a ^ b);
    }

    return 0;
}
