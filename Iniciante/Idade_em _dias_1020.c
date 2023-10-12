#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
    int idade, ano = 0, mes = 0, dia = 0;
  
    /*inicialização de todas as variáveis = 0 para evitar
    lixo de memória*/
    
    scanf("%i", &idade);
    
    if (idade >= 365){
        ano = idade/365;
        idade = idade%365;
    }
    if (idade >= 30){
        mes = idade/30;
        idade = idade%30;
    }
    dia = idade;
    
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);
    
    return 0;
    }
