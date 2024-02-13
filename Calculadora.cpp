#include <iostream>

using namespace std;

// Función para encontrar el m.c.d (algoritmo de Euclides)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para encontrar el m.c.m usando el m.c.d
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    // Calcula y muestra el m.c.d y el m.c.m
    cout << "El m.c.d de " << num1 << " y " << num2 << " es: " << gcd(num1, num2) << endl;
    cout << "El m.c.m de " << num1 << " y " << num2 << " es: " << lcm(num1, num2) << endl;

    return 0;
}
