#include "voiture.h"

Voiture::Voiture(int annee, int prix, float vitesse, int portes) : Vehicule(annee,prix) , m_vitesse(vitesse) , m_nbrePortes(portes)
{

}
Voiture::~Voiture()
{

}
void Voiture::afficherInfo() const
{
    std::cout << "Voiture------\nAnnee : " << m_annee << "\nPrix : " << m_prix << "\nVitesse Max : " << m_vitesse << "\nNmbre De Portes : " << m_nbrePortes << std::endl;
}
