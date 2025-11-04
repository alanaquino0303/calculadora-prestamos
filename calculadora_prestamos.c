#include <stdio.h>
#include <math.h>

int main() {
    double capital, tasaAnual, tasaMensual, cuota;
    double totalPagado, intereses, saldo, interesMensual, abonoCapital;
    int meses;
    char continuar, verTabla;

    do {
        printf("CALCULADORA DE PRÉSTAMOS\n");

        // Ingreso del capital.
        printf("Introduce el capital: ");
        if (scanf("%lf", &capital) != 1 || capital <= 0) {
            printf("Error: El capital debe ser un numero positivo.\n");
            while (getchar() != '\n');
            continue;
        }

        // Ingreso de la tasa anual.
        printf("Introduce la tasa anual: ");
        if (scanf("%lf", &tasaAnual) != 1 || tasaAnual <= 0) {
            printf("Error: La tasa debe ser un numero positivo.\n");
            while (getchar() != '\n');
            continue;
        }

        // Ingreso del número de meses.
        printf("Introduce el numero de meses: ");
        if (scanf("%d", &meses) != 1 || meses <= 0) {
            printf("Error: Los meses deben ser un numero entero positivo.\n");
            while (getchar() != '\n');
            continue;
        }

        // Conversión de tasa anual a mensual.
        tasaMensual = tasaAnual / 12 / 100;

        // Cálculo de la cuota mensual (fórmula de anualidad).
        cuota = capital * (tasaMensual * pow(1 + tasaMensual, meses)) / (pow(1 + tasaMensual, meses) - 1);

        // Cálculos adicionales.
        totalPagado = cuota * meses;
        intereses = totalPagado - capital;

        // Mostrar resumen principal.
        printf("\nRESULTADOS\n");
        printf("Capital inicial   : %12.2f\n", capital);
        printf("Tasa anual        : %11.2f %%\n", tasaAnual);
        printf("Plazo (meses)     : %12d\n", meses);
        printf("Cuota mensual     : %12.2f\n", cuota);
        printf("Total pagado      : %12.2f\n", totalPagado);
        printf("Intereses totales : %12.2f\n", intereses);

        // Preguntar si desea ver la tabla de amortización.
        printf("\n¿Deseas ver la tabla de amortizacion? (s/n): ");
        while (getchar() != '\n'); // Limpia buffer.
        scanf("%c", &verTabla);

        if (verTabla == 's' || verTabla == 'S') {
            printf("\n%-6s %-12s %-12s %-12s %-12s\n", "Mes", "Cuota", "Interes", "Capital", "Saldo");
            printf("---------------------------------------------------------------\n");

            saldo = capital;

            for (int i = 1; i <= meses; i++) {
                interesMensual = saldo * tasaMensual;
                abonoCapital = cuota - interesMensual;
                saldo -= abonoCapital;

                if (saldo < 0.01) saldo = 0; // Evitar redondeos negativos.

                printf("%-6d %12.2f %12.2f %12.2f %12.2f\n",
                       i, cuota, interesMensual, abonoCapital, saldo);
            }

            printf("---------------------------------------------------------------\n");
            printf("Total pagado: %.2f | Intereses: %.2f\n", totalPagado, intereses);
        }

        // Preguntar si desea realizar otro cálculo.
        printf("\n¿Deseas realizar otro calculo? (s/n): ");
        while (getchar() != '\n');
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nSaliendo del programa...\n");
    return 0;
}