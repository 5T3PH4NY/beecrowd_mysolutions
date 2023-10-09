#include <stdio.h>
 
int main() {
    
    int tempo = 0, horas = 0, min = 0, seg = 0; //inicialização das variáveis
    
    scanf(" %i", &tempo); //entra em segundos
    if(tempo>=3600){ //calcula as horas dividindo por 3600, que o número de segundos em uma hora.
        horas = tempo/3600;
        tempo = tempo%3600; //atualiza a variável tempo
    }
    if(tempo>=60){ //calcula os minutos dividindo por 60, que o número de segundos em uma minuto.
        min = tempo/60;
        tempo = tempo%60; //atualiza a variável tempo
    }
    seg = tempo;
    
    
    printf("%i:%i:%i\n", horas, min, seg); //impressão da saída formatada
 
    return 0;
}
