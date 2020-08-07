#ifndef COLLECTION_H
#define COLLECTION_H
#include "voiture.h"
#include "moto.h"
#include "camion.h"
#include <vector>

class Collection
{
public:
    Collection();
    void ajouter(Vehicule*);
    void afficherLaCollection() const;
    ~Collection();
    static int nmbreCollection();
private:
    std::vector<Vehicule*> m_collection;
    // m_nombre représente le nombre des vehicule dans une collection:
    int m_nombre;
    // m_nombreDesCollections représente le nombre des collections:
    // C'est un attribut qui est le propriétaire de la classe et non pas un seul instance (objet):
    static int m_nombreDesCollections;
};

#endif // COLLECTION_H
