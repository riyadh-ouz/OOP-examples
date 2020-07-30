#include "Personnage.h"

int main()
{
    Personnage a, b;
    a = b; // Appel l'opérateur de copie
    // a et b maintenant ont des valeurs d'attribues égales mais ils restent deux objet différent, voir l'adresse de chacun
    a.getAdresse();
    b.getAdresse();
}
