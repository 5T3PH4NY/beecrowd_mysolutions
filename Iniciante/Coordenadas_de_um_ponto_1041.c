#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    float p1, p2;
    scanf("%f %f", &p1, &p2);
    
    if (p1 == 0 && p2 == 0){
        printf("Origem\n");
    }
    
    else if(p1 > 0 && p2 > 0){
        printf("Q1\n");
        
    }
    
    else if(p1 < 0 && p2 > 0){
        printf("Q2\n");
        
    }
    
    else if(p1 < 0 && p2 < 0){
        printf("Q3\n");
        
    }
    
    else if(p1 > 0 && p2 < 0){
        printf("Q4\n");
        
    }
    
    else if (p2 == 0){printf("Eixo X\n");}
    else if (p1 == 0){printf("Eixo Y\n");}
    
    
    
    return 0;
    }
