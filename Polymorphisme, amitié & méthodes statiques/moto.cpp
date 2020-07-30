#include "moto.h"

Moto::Moto(int annee, int prix, float vitesse) : Vehicule(annee,prix) , m_vitesse(vitesse)
{

}
void Moto::afficherInfo() const
{
    std::cout << "Moto------\nAnnee : " << m_annee << "\nPrix : " << m_prix << "\nVitesse Max : " << m_vitesse << std::endl;
}
Moto::~Moto()
{

}
