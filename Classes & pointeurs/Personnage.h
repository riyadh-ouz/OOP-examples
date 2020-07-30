#pragma once
#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include"Arme.h"

// Ce fichier montre les notions suivantes:
/*
 *  1/Lorsque les classes sont associées par un pointeur, il faut veiller à bien libérer la mémoire afin que tous les éléments 
	soient supprimés.
	2/Il existe une surcharge particulière du constructeur appelée « constructeur de copie ». C'est un constructeur appelé
	lorsqu'un objet doit être copié.
	3/ Le compilateur se charge automatiquement d'implémenter le constructeur de copie,
	** Mais il est important de le redéfinir lorsqu'un objet utilise des pointeurs vers d'autres objets.
	4/ Idem pour l'opérateur d'affectation = il faut le redéfinir au cas des classe associées par le biais des pointeurs.
*/
class Personnage
{
public:

	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	// Constructeur de copie
	Personnage(Personnage const& autre);

	~Personnage();
	
	

	// Idem pour l'opérateur d'affectation ou bien l'operateur de copie il est generé automatquement par le compilateur,
	// Mais on doit le redéfinir
	// Personnage Riyadh = Zerrouk; il s'agit du constructeur de copie;
	// Riyadh = Zerrouk; il s'agit de l'opérateur de copie;
	// Le constructeur de copie est appelé aussi lorsqu'on passe un objet comme argument d'une fonction sans référence;
	Personnage& operator=(Personnage const& autre);

	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant()const;
	void afficherEtat() const;
	void getAdresse() const;

private:

	int m_vie;
	int m_mana;
	// Pointeur vers un objet Arme
	Arme* m_arme;
};

#endif // !PERSONNAGE_H
