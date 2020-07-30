#ifndef GUERRIER_H
#define GUERRIER_H

#include <string>
#include "Personnage.h"

class Guerrier : public Personnage
{
public:
    Guerrier();
    Guerrier(std::string nom);
    void frapperCommeUnSourdAvecUnMarteau() const;
    // Le masquage de la méthode sePresenter()
    virtual void sePresenter() const;
    virtual ~Guerrier();
};

/* La dérivation de type (pointeurs ou références)
 // Ne pas confondre avec le polymorphisme
 Personnage* monPersonnage(NULL);
 Guerrier* monGuerrier = new Guerrier();
 // On peut affecter un enfant à un parent car monGuerrier est un Personnage comme le montre l'exemple:
 monPersonnage = monGuerrier; // ça marche car guerrier possède tous les attributs et les méthodes de la classe Personnage
 // Ceci est faux car monPersonnage n'est pas forcément qui est un Guerrier:
 monGuerrier = MonPersonnage;
*/


#endif // GUERRIER_H
