#include <stdio.h>

int main() {
    int n = 100; 
    int suma = 0; 

    for (int i = 1; i <= n; i++) 
	{
        suma += i * i;
    }
    printf("Este es el resultado de la suma de los cuadrados de los primeros %d: %d\n", n, suma);
    
    return 0;
}

