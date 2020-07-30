#include "Personnage.h"

// L'initialisation d'un attribut statique:
int Personnage::nmbreDePersonnage = 0;
Personnage::Personnage() :m_vie(100), m_nom("Riyadh") {
    // L'incrémentation de nombre des personnage:
    nmbreDePersonnage++;
}
Personnage::Personnage(std::string nom) :m_vie(100), m_nom(nom){
    nmbreDePersonnage++;
}
Personnage::~Personnage()
{
    // On le met juste pour l'instruction delete et la virtualité;
    // La décrementation de nombre des personnage:
    nmbreDePersonnage--;
}
void Personnage::recevoirDegats(int degats) {
    m_vie -= degats;
}
void Personnage::coupDePoing(Personnage& cible)const {
    cible.recevoirDegats(10);
}
void Personnage::sePresenter() const{
    std::cout << "Je  m'appele " << m_nom << "\nEt j'ai " << m_vie << " points de vie\n";
}
// L'implementation de la methode statique pour renvoyer le nombre de Personnages:
int Personnage::Total() {
    return nmbreDePersonnage;
}
