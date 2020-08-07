#ifndef CAMION_H
#define CAMION_H
#include "vehicule.h"


class Camion : public Vehicule
{
public:
    Camion(int,int,float);
    virtual void afficherInfo() const;
    ~Camion();
private:
    float m_charge;
};

#endif // CAMION_H
