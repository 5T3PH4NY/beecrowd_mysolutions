#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    float val;
    int no = 0;
    
    scanf("%f", &val);
    
    printf("NOTAS:\n");
    if(val >= 100.00){
        no = val/100.00;
        val = val - (no * 100.00);
        
    }printf("%i nota(s) de R$ 100.00\n", no);
    no = 0;
    if(val >= 50.00){
        no = val/50.00;
        val = val - (no * 50.00);
        
    }printf("%i nota(s) de R$ 50.00\n", no);
    no = 0;
    if(val >= 20.00){
        no = val/20.00;
        val = val - (no * 20.00);
        
    }printf("%i nota(s) de R$ 20.00\n", no);
    no = 0;
    
    if(val >= 10.00){
        no = val/10.00;
        val = val - (no * 10.00);
        
    }printf("%i nota(s) de R$ 10.00\n", no);
    no = 0;
    if(val >= 5.00){
        no = val/5.00;
        val = val - (no * 5.00);
        
    }printf("%i nota(s) de R$ 5.00\n", no);
    no = 0;
    if(val >= 2.00){
        no = val/2.00;
        val = val - no * 2.00;
        
    }printf("%i nota(s) de R$ 2.00\n", no);
    no = 0;
    
    printf("MOEDAS:\n");
    if(val >= 1.00){
        no = val/1.00;
        val = val - no * 1;
        
    }printf("%i moeda(s) de R$ 1.00\n", no);
    no = 0;
    if(val >= 0.50){
        no = val/0.50;
        val = val - (no * 0.50);
        
    }printf("%i moeda(s) de R$ 0.50\n", no);
    no = 0;
    if(val >= 0.25){
        no = val/0.25;
        val = val - (no * 0.25);
        
    }printf("%i moeda(s) de R$ 0.25\n", no);
    no = 0;
    if(val >= 0.10){
        no = val/0.10;
        val = val - (no * 0.10);
        
    }printf("%i moeda(s) de R$ 0.10\n", no);
    no = 0;
    if(val >= 0.05){
        no = val/0.05;
        val = val - (no * 0.05);
        
    }printf("%i moeda(s) de R$ 0.05\n", no);
    no = 0;
    if(val >= 0.01){
        no = val/0.01;
    
    }printf("%i moeda(s) de R$ 0.01\n", no);
    
    
    return 0;
}
