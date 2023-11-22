#include <stdio.h>

int main() {
    int fila, columna;
    
    printf("Ingrese el numero de filas: ");
    scanf("%d", &fila);
    
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columna);
    
    int matriz[fila][columna];
    
    // Inicializar la matriz en ceros
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            matriz[i][j] = 0;
        }
    }
    return 0;
}
