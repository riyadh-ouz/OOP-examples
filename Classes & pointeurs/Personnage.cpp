#include "Personnage.h"
#include <string>
using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100), m_arme(0)
{
	// Allocation dynamique de l'attribue m_arme car c'est un pointeur
	m_arme = new Arme; // Constructeur par default de la classe Arme
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(NULL)
{
	// Pour des raison de sécurité on initialise d'abord m_arme(NULL);
	m_arme = new Arme(nomArme, degatsArme);
}

// Le constructeur de COPIE
// REMARQUE ON PEUT ACCEDER AUX ATTRIBUTS D'UN OBJET X A L'INTERIEUR D'UN OBJET Y MAIS A CONDITION IL ONT LE MEME TYPE (CLASSE).
Personnage::Personnage(Personnage const& autre) : m_vie(autre.m_vie), m_mana(autre.m_mana), m_arme(NULL)
{
	m_arme = new Arme(*(autre.m_arme));
	// Rappelle le prototype de constructeur Arme(Arme const& autreArme);
}

// Opérateur d'affectation <de copie>
Personnage& Personnage::operator=(Personnage const& autre) {
	if (this != &autre) // Si les deux Pesonnage sont differents alors on fait l'affectaton
	{
		m_vie = autre.m_vie;
		m_mana = autre.m_mana;
		delete m_arme; // Ici on libère le pointeur ancien par contre le cas du constructeur etait deja NULL.
		m_arme = new Arme(*(autre.m_arme));
	}
	return *this;
}
Personnage::~Personnage() {
	// Si on oublie la libération on risque d'une fuite de mémoire
	delete m_arme;
}

void Personnage::getAdresse()const {
	cout << this << endl;
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	if (m_vie < 0) m_vie = 0;
}
void Personnage::attaquer(Personnage& cible)
{
	cible.recevoirDegats(m_arme->getDegats());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;
	if (m_vie > 100) m_vie = 100;
}
void Personnage::changerArme(string nomNouvelleArme, int
	degatsNouvelleArme)
{
	m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}
bool Personnage::estVivant()const { return m_vie > 0; }
void Personnage::afficherEtat() const
{
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	m_arme->afficher();
}
