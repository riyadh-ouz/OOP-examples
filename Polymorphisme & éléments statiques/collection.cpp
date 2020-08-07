#include "collection.h"


// INITIALISATION D'UN ATTRIBUT STATIQUE se fait en dehors de toute classe ou fonction y compris le main();
int Collection::m_nombreDesCollections = 0;

Collection::Collection() : m_nombre(0)
{
    m_nombreDesCollections++;
}
void Collection::ajouter(Vehicule* v)
{
    m_collection.push_back(v);
    m_nombre++;
}
void Collection::afficherLaCollection() const
{
    for(int i = 0; i < m_nombre; i++)
        m_collection[i]->afficherInfo();
}
Collection::~Collection()
{
    for(int i = 0; i < m_nombre; i++){
        delete m_collection[i];
        m_collection[i] = NULL;
    }
    m_nombreDesCollections--;
    std::cout << "\nCollection detruite";
}
int Collection::nmbreCollection(){
    return m_nombreDesCollections;
}
