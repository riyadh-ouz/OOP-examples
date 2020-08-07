#include "collection.h"
#include <iostream>

int main()
{
    Voiture *voiture = new Voiture(14,14,14,14);
    Vehicule *vehicule = NULL;
    vehicule = dynamic_cast<Vehicule*>(voiture);
    vehicule->afficherInfo();
/*
    Collection *Mercedes = new Collection,
               *BMW = new Collection();

    Mercedes->ajouter(new Voiture(2009,100,180,4));
    Mercedes->ajouter(new Moto(2010,100,220));
    Mercedes->ajouter(new Camion(2011,325,7000));
    Mercedes->ajouter(new Voiture(2018,240,240,2));

    BMW->ajouter(new Voiture(2006,180,240,4));
    BMW->ajouter(new Moto(2018,400,280));
    BMW->ajouter(new Voiture(2018,240,240,2));
    BMW->ajouter(new Moto(2014,200,240));

    std::cout << "\nIl y a " << Collection::nmbreCollection() << " collections dans le garage\n" << std::endl;
    Mercedes->afficherLaCollection();
    BMW->afficherLaCollection();
    delete Mercedes;
    delete BMW;
    std::cout << "\nIl y a " << Collection::nmbreCollection() << " collections dans le garage\n" << std::endl;
    std::cout << "\nRiyadh OUZGHARA\n";
    */

    return 0;
}
