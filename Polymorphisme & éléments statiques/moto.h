#ifndef MOTO_H
#define MOTO_H
#include "vehicule.h"

class Moto : public Vehicule
{
public:
    Moto(int,int,float);
    virtual void afficherInfo() const;
    virtual ~Moto();
private:
    float m_vitesse;
};

#endif // MOTO_H
