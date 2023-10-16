#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    
    float a, b, c;
    float r1, r2, del, d;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    del = (b * b) - 4 * a * c;
    
    if(del < 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    del = sqrt(del);
    d = 2.0 * a;
    
    r1 = ((-1 * b) + del);
    r2 = ((-1 * b) - del);
    
    r1 = r1/d;
    r2 = r2/d;
    
    printf("R1 = %.5f\n", r1);
    printf("R2 = %.5f\n", r2);
    
 
    return 0;
}
