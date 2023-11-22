#include <stdio.h>

int main() {
    int fila, columna;
    int i,j;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fila);
    
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columna);
    
    int matriz[fila][columna];
    
    // Inicializar la matriz en ceros
    for ( i = 0; i < fila; i++) {
        for ( j = 0; j < columna; j++) {
            matriz[i][j] = 0;
        }
    }
    
        // Establecer la diagonal principal en 1
    for ( i = 0; i < fila; i++) {
        matriz[i][i] = 1;
    }
  
    return 0;
}
