#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

class Personnage {
public:
    Personnage();
    Personnage(std::string nom);
    void recevoirDegats(int degats);
    void coupDePoing(Personnage& cible) const;
    // La fonction virtuelle pour la RESOLUTION DYNAMIQUES des liens
    virtual void sePresenter() const;
    // La methodes statiques:
    static int Total();
    // Le destructeur virtuel pour manipuler la destruction
    virtual ~Personnage();
protected:
    int m_vie;
    std::string m_nom;
    static int nmbreDePersonnage;
    // Fonction amie
    friend void affiche(Personnage const& p);
};

#endif // PERSONNAGE_H
