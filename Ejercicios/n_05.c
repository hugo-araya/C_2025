#include <stdio.h>

int main() {
    int x, y;
    int cantidad = 0;

    // Coordenadas de los rectángulos
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;

    printf("Ingrese coordenadas del primer rectángulo (x1 y1 x2 y2):\n");
    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);

    printf("Ingrese coordenadas del segundo rectángulo (x1 y1 x2 y2):\n");
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);

    printf("Ingrese puntos (x y). Ingrese 0 0 para terminar.\n");

    while (1) {
        printf("Punto: ");
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0) {
            break;
        }

        // Rectángulo 1
        int r1_xmin, r1_xmax, r1_ymin, r1_ymax;
        if (r1_x1 < r1_x2) {
            r1_xmin = r1_x1;
            r1_xmax = r1_x2;
        } else {
            r1_xmin = r1_x2;
            r1_xmax = r1_x1;
        }
        if (r1_y1 < r1_y2) {
            r1_ymin = r1_y1;
            r1_ymax = r1_y2;
        } else {
            r1_ymin = r1_y2;
            r1_ymax = r1_y1;
        }

        // Rectángulo 2
        int r2_xmin, r2_xmax, r2_ymin, r2_ymax;
        if (r2_x1 < r2_x2) {
            r2_xmin = r2_x1;
            r2_xmax = r2_x2;
        } else {
            r2_xmin = r2_x2;
            r2_xmax = r2_x1;
        }
        if (r2_y1 < r2_y2) {
            r2_ymin = r2_y1;
            r2_ymax = r2_y2;
        } else {
            r2_ymin = r2_y2;
            r2_ymax = r2_y1;
        }

        // Verifica si el punto está en los dos rectángulos
        if (x >= r1_xmin && x <= r1_xmax && y >= r1_ymin && y <= r1_ymax &&
            x >= r2_xmin && x <= r2_xmax && y >= r2_ymin && y <= r2_ymax) {
            cantidad = cantidad + 1;
        }
    }

    printf("Cantidad de puntos en la intersección de los dos rectángulos: %d\n", cantidad);

    return 0;
}
