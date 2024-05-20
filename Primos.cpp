#include <stdio.h>

int esPrimo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void saberPrimo() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    if (esPrimo(num)) {
        printf("%i es un numero primo.\n", num);
    } else {
        printf("%i no es un numero primo.\n", num);
    }
}

void rangoPrimo() {
    int inicio, fin;
    printf("Ingrese el rango (inicio y fin):\n");
    scanf("%i %i", &inicio, &fin);
    printf("Numeros primos en el rango [%i, %i]: ", inicio, fin);
    int i;  
    for (i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%i ", i);
        }
    }
    printf("\n");
}

int menu(){
	int opc;
	while(1){
		system("cls");
		printf("Bienvenido al menu, seleccione la opcion que desee:\n");
		printf("1.-Ingresar un numero para saber si es primo o no\n");
		printf("2.-Ingresar un rango y mostrar todos los nummeros primos dentro de este\n");
		printf("3.-Salir\n");
		scanf("%i", &opc);
		switch(opc){
			case 1:
				saberPrimo();
				system("pause");
				break;
			case 2:
				rangoPrimo();
				system("pause");
				break;
			case 3:
				return 0;
			default:
                printf("Opcion no valida, intente de nuevo.\n");
                system("pause");
		}
	}
}

int main(){
	menu();
	return 0;

