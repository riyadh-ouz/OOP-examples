#ifndef VOITURE_H
#define VOITURE_H
#include "vehicule.h"

class Voiture : public Vehicule
{
public:
    Voiture(int,int,float,int);
    // IL FAUT REDEFINIR afficherInfo(); SI ON LE FAIT PAS "Voiture" SERA UNE CLASSE ABSTRAITE PAR HERITAGE
    // CAR LA FONCTION VIRTUELLE PURE afficherInfo(); SERA REDEFINI AUTOMATIQUEMENT
    // ALORS LA REGLE : Chaque fonction virtuelle pure doit etre redefini dans les classe filles;
    virtual void afficherInfo() const;
    virtual ~Voiture();


private:
    int m_vitesse;
    int m_nbrePortes;
};

#endif // VOITURE_H
