#include <iostream>
#include "cal.h"


using namespace std;

int main() {
    int choix;
    double nombre1, nombre2, resultat;

    do {
        afficherMenu();
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Entrez le premier nombre : ";
                cin >> nombre1;
                cout << "Entrez le second nombre : ";
                cin >> nombre2;
                resultat = addition(nombre1, nombre2);
                cout << "Résultat : " << resultat << endl;
                break;
            case 2:
                cout << "Entrez le premier nombre : ";
                cin >> nombre1;
                cout << "Entrez le second nombre : ";
                cin >> nombre2;
                resultat = soustraction(nombre1, nombre2);
                cout << "Résultat : " << resultat << endl;
                break;
            case 3:
                cout << "Entrez le premier nombre : ";
                cin >> nombre1;
                cout << "Entrez le second nombre : ";
                cin >> nombre2;
                resultat = multiplication(nombre1, nombre2);
                cout << "Résultat : " << resultat << endl;
                break;
            case 4:
                cout << "Entrez le premier nombre : ";
                cin >> nombre1;
                cout << "Entrez le second nombre : ";
                cin >> nombre2;
                resultat = division(nombre1, nombre2);
                cout << "Résultat : " << resultat << endl;
                break;
            case 5:
                cout << "Entrez le premier nombre : ";
                cin >> nombre1;
                cout << "Entrez l'exposant' : ";
                cin >> nombre2;
                resultat = exponentielle(nombre1, nombre2);
                cout << "Résultat : " << resultat << endl;
                break;
            case 6:
                cout << "Entrez le nombre dont on veut calculer la racine carrée  : ";
                cin >> nombre1;
                resultat = racineCarree(nombre1);
                cout << "Résultat : " << resultat << endl;
                break;
            case 7:
                cout << "Entrez le nombre dont on veut calculer le sinus  : ";
                cin >> nombre1;
                resultat = sinus(nombre1);
                cout << "Résultat (sin) est : " << resultat << endl;
                break;
            case 8:
                cout << "Entrez le nombre dont on veut calculer le cosinus  : ";
                cin >> nombre1;
                resultat = cosinus(nombre1);
                cout << "Résultat (cos) est : " << resultat << endl;
                break;
            case 9:
            cout << "Entrez le nombre dont on veut la tangente  : ";
                cin >> nombre1;
                resultat = tangente(nombre1);
                cout << "Résultat (tan): " << resultat << endl;
                break;
            case 10:
                cout << "bye! " << endl;
                break;
            default:
                cout << "Option invalide. Veuillez réessayer." << endl;
        }
        cout << endl;

    } while (choix != 10);

    return 0;
}
