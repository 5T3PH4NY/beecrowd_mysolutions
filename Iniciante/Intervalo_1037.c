#include <stdio.h>
 
int main() {
    
    float val;
    
    scanf("%f", &val);
    
    if(val >= 0.000 && val <= 25.000){
        printf("Intervalo [0,25]\n");
    }
    else if(val > 25.000 && val <= 50.000){
    printf("Intervalo (25,50]\n");        
    }
    else if(val > 50.000 && val <= 75.000){
    printf("Intervalo (50,75]\n");        
    }
    else if(val > 75.000 && val <= 100.000){
    printf("Intervalo (75,100]\n");        
    }
    else{
        printf("Fora de intervalo\n");
    }
    
 
    return 0;
}
