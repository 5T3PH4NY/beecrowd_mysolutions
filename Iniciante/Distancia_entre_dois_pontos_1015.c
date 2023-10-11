#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
    
    float xi, xii, yi, yii, sum1, sum2;
    float sai = 0;
    
    scanf("%f %f", &xi, &yi);
    scanf("%f %f", &xii, &yii);
    
    sum1 = xii - xi;
    sum2 = yii - yi;
    
    sum1 = sum1 * sum1;
    sum2 = sum2 * sum2;
    
    sai = sqrt(sum1 + sum2);
    
    printf("%.4f\n", sai);
    
    return 0;
}
