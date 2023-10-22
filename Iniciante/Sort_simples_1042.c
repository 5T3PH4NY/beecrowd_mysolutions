#include <stdio.h>
 
int main() {
    
    int a = 0, b = 0, c = 0;
    
    scanf("%i %i %i", &a, &b, &c);
    
    
    if (a < b && a < c){
        printf("%i\n", a);
        
        if(b < c){printf("%i\n", b);
            printf("%i\n", c);
        }
        else{printf("%i\n", c);
            printf("%i\n", b);
        }
    }
    else if (a > b && b < c){
        printf("%i\n", b);
        
        if(a < c){printf("%i\n", a);
            printf("%i\n", c);
        }
        else{printf("%i\n", c);
            printf("%i\n", a);
        }
    }
    else if(c < b && a > c){
        printf("%i\n", c);
        if(a < b){printf("%i\n", a);
            printf("%i\n", b);
        }
        else{printf("%i\n", b);
            printf("%i\n", a);
        }
    }
    
    printf("\n");
    
    
    printf("%i\n%i\n%i\n", a, b, c);
    return 0;
}
