#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    float n1, n2, n3, n4; 
    float med, af, nf;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
 
    med = ((n1*2) + (n2*3) + (n3*4) + n4)/10.0;

    if (med >= 7.0){
        printf("Media: %.1f\n", med);
        printf("Aluno aprovado.\n");
    }
    else if(med >= 5.0){
        scanf("%f", &af);
        printf("Media: %.1f\n", med);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", af);
        af = af + med;
        af = af/2;
        if(af >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", af);
        }
        
        else{
            printf("Media final: %.1f\n", af);
            printf("Aluno reprovado.\n");
        }
        
    }
    else if (med <= 4.999){
        printf("Media: %.1f\n", med);
        printf("Aluno reprovado.\n");
    }
    
    
    return 0;
}
