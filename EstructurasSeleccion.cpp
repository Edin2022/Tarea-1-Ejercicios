
//Estructuras Seleccion 24/02/2024

#include <iostream>

using namespace std;

int main() {

    /*

    int numerodia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> numerodia;

    switch (numerodia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido " << endl;
    }

     */



    int opcion;

    cout << "Seleccione el ejercicio a ejecutar:" << endl;
    cout << "1. Determinar si es mayor de edad " << endl;
    cout << "2. Determinar cual es el mayor de dos numeros " << endl;
    cout << "3. Determinar si un numero es par o impar " << endl;
    cout << "4. Calcular el factorial de un numero " << endl;
    cout << "5. Mostrar numeros impares hasta un numero dado (bucle for) " << endl;
    cout << "6. Mostrar numeros impares hasta un numero dado (bucle while) " << endl;
    cout << "7. Mostrar el nombre del dia de la semana " << endl;
    cout << "Ingrese el numero correspondiente a la opcion: ";
    cin >> opcion;

    switch (opcion) {

        case 1: {
            // Codigo para determinar si es mayor de edad
            int edad;
            cout << "Ingrese su edad: ";
            cin >> edad;
            if (edad >= 18) {
                cout << "Eres mayor de edad " << endl;
            } else {
                cout << "Eres menor de edad " << endl;
            }
            break;
        }

        case 2: {
            // Codigo para determinar cual es el mayor de dos numeros

            int num1, num2;

           cout << "Ingrese dos numeros separados por un espacio: ";
            cin >> num1 >> num2;
            if (num1 > num2) {
               cout << num1 << " es mayor que " << num2 << endl;
            } else if (num1 < num2) {
                cout << num2 << " es mayor que " << num1 << endl;
            } else {
                cout << "Ambos numeros son iguales " << endl;
            }
            break;
        }
        case 3: {
            // Codigo para determinar si un numero es par o impar

            int numero;

            cout << "Ingrese un numero entero: ";
            cin >> numero;

            if (numero % 2 == 0) {
                cout << numero << " es un numero par " << endl;
            } else {
                cout << numero << " es un numero impar " <<endl;
            }
            break;
        }
        case 4: {
            // Codigo para calcular el factorial de un numero

            int numero, factorial = 1;
            cout << "Ingrese un numero entero para calcular su factorial: ";
            cin >> numero;

            int i = 1;
            while (i <= numero) {
                factorial *= i;
                i++;
            }
            cout << "El factorial de " << numero << " es " << factorial <<endl;
            break;
        }
        case 5: {

            // Codigo para mostrar numeros impares hasta un numero dado (bucle for)

            int numero;

            cout << "Ingrese un numero mayor a 10 y menor que 30: ";
            cin >> numero;

            if (numero > 10 && numero < 30) {
                cout << "Numeros impares desde 1 hasta " << numero << ":" << endl;
                for (int i = 1; i <= numero; i += 2) {
                    cout << i << endl;
                }
            } else {
                cout << "El numero ingresado no cumple con los requisitos " << endl;
            }
            break;
        }
        case 6: {

            // Codigo para mostrar numeros impares hasta un numero dado (bucle while)

            int numero;

            cout << "Ingrese un numero mayor a 10 y menor que 30: ";
            cin >> numero;

            if (numero > 10 && numero < 30) {
                cout << "Numeros impares desde 1 hasta " << numero << ":" << endl;
                int i = 1;
                while (i <= numero) {
                    cout << i << endl;
                    i += 2;
                }
            } else {
                cout << "El numero ingresado no cumple con los requisitos " << endl;
            }
            break;
        }
        case 7: {
            // Codigo para mostrar el nombre del dia de la semana correspondiente a un numero dado
            int numerodia;
            cout << "Ingrese un numero del 1 al 7: ";
            cin >> numerodia;
            switch (numerodia) {
                case 1:
                    cout << "Lunes" << endl;
                    break;
                case 2:
                    cout << "Martes" << endl;
                    break;
                case 3:
                    cout << "Miercoles" << endl;
                    break;
                case 4:
                    cout << "Jueves" << endl;
                    break;
                case 5:
                    cout << "Viernes" << endl;
                    break;
                case 6:
                    cout << "Sabado" << endl;
                    break;
                case 7:
                    cout << "Domingo" << endl;
                    break;
                default:
                    cout << "Numero invalido " << endl;
            }
            break;
        }
        default:
            cout << "Opcion invalida." << endl;
    }



    return 0;
}
