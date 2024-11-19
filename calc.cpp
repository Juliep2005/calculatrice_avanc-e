#include <iostream>
#include <cmath>
#include "cal.h"

using namespace std;

void afficherMenu() {
    cout << "=== Calculatrice Avancée ===" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Soustraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponentielle (a^b)" << endl;
    cout << "6. Racine carrée (sqrt)" << endl;
    cout << "7. Sinus (sin)" << endl;
    cout << "8. Cosinus (cos)" << endl;
    cout << "9. Tangeante (tan)" << endl;
    cout << "10. Quitter" << endl;
    cout << "Choisissez une option parmi celles proposées : ";
}

double addition(double a, double b) {
    return a + b;
}

double soustraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Erreur : Division par zéro !" << endl;
        return 0;
    }
}

double exponentielle(double base, double exposant) {
    return pow(base, exposant);
}

double racineCarree(double nombre) {
    if (nombre >= 0)
        return sqrt(nombre);
    else {
        cout << "Erreur : Racine carrée d'un nombre négatif !" << endl;
        return 0;
    }
}

double sinus( double angle) {
    return sin(angle);
}

double cosinus( double angle) {
    return cos(angle);
}

double tangente( double angle) {
    return tan(angle);
}
