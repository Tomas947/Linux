#include <stdio.h>
#include <stdbool.h>
#include "./fn.h"

unsigned long long int factorial(unsigned long long int v){
    unsigned long long int aux = 1;
    //

    while(true){
        aux *=v;
        v--;
        if(v == 0){
            return aux;
        }
    }
}
