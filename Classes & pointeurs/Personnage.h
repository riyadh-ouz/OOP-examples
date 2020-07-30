#pragma once
#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include"Arme.h"

// Ce fichier montre les notions suivantes:
/*
 *  1/Lorsque les classes sont associ�es par un pointeur, il faut veiller � bien lib�rer la m�moire afin que tous les �l�ments 
	soient supprim�s.
	2/Il existe une surcharge particuli�re du constructeur appel�e � constructeur de copie �. C'est un constructeur appel�
	lorsqu'un objet doit �tre copi�.
	3/ Le compilateur se charge automatiquement d'impl�menter le constructeur de copie,
	** Mais il est important de le red�finir lorsqu'un objet utilise des pointeurs vers d'autres objets.
	4/ Idem pour l'op�rateur d'affectation = il faut le red�finir au cas des classe associ�es par le biais des pointeurs.
*/
class Personnage
{
public:

	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	// Constructeur de copie
	Personnage(Personnage const& autre);

	~Personnage();
	
	

	// Idem pour l'op�rateur d'affectation ou bien l'operateur de copie il est gener� automatquement par le compilateur,
	// Mais on doit le red�finir
	// Personnage Riyadh = Zerrouk; il s'agit du constructeur de copie;
	// Riyadh = Zerrouk; il s'agit de l'op�rateur de copie;
	// Le constructeur de copie est appel� aussi lorsqu'on passe un objet comme argument d'une fonction sans r�f�rence;
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
