#include "Personnage.h"

int main()
{
    Personnage a, b;
    a = b; // Appel l'op�rateur de copie
    // a et b maintenant ont des valeurs d'attribues �gales mais ils restent deux objet diff�rent, voir l'adresse de chacun
    a.getAdresse();
    b.getAdresse();
}
