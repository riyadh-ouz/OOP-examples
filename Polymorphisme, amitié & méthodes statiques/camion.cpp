#include "camion.h"

Camion::Camion(int annee, int prix, float charge) : Vehicule(annee,prix) , m_charge(charge)
{

}
void Camion::afficherInfo() const
{
    std::cout << "Camio------\nAnnee : " << m_annee << "\nPrix : " << m_prix << "\nCharge Max : " << m_charge << std::endl;
}
Camion::~Camion()
{

}

