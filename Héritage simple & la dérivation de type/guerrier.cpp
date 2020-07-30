#include "guerrier.h"

Guerrier::Guerrier() : Personnage(){

}
Guerrier::Guerrier(std::string nom) : Personnage(nom){

}
Guerrier::~Guerrier()
{}

void Guerrier::sePresenter() const{
    // Le d�m&squage
    Personnage::sePresenter();

    std::cout << "Je suis encore un Guerrier\n";
}
