#include <stdio.h>
#include <string.h>
#include "./fn.h"

int main(void){
    unsigned long long int v1;
    printf("Ingrese un nuemro:");
    scanf("%llu",&v1);

    v1 = factorial(v1);

    printf("El factorial es: %llu\n",v1);
    return 0;
}
