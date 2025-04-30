#include <stdio.h>

// Función para verificar si un punto está dentro de un rectángulo
int dentroRect(int x, int y, int x1, int y1, int x2, int y2) {
    int xmin = x1 < x2 ? x1 : x2;
    int xmax = x1 > x2 ? x1 : x2;
    int ymin = y1 < y2 ? y1 : y2;
    int ymax = y1 > y2 ? y1 : y2;
    
    return x >= xmin && x <= xmax && y >= ymin && y <= ymax;
}

int main() {
    int x, y;
    int count = 0;

    // Coordenadas de los rectángulos
    int r1_x1 = 1, r1_y1 = 1, r1_x2 = 5, r1_y2 = 5;
    int r2_x1 = 3, r2_y1 = 3, r2_x2 = 7, r2_y2 = 7;

    printf("Ingrese puntos (x y). Ingrese 0 0 para terminar.\n");

    while (1) {
        printf("Punto: ");
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0)
            break;

        // Verificar si el punto está en la intersección de ambos rectángulos
        if (dentroRect(x, y, r1_x1, r1_y1, r1_x2, r1_y2) &&
            dentroRect(x, y, r2_x1, r2_y1, r2_x2, r2_y2)) {
            count++;
        }
    }

    printf("Cantidad de puntos en la intersección de los rectángulos: %d\n", count);

    return 0;
}
