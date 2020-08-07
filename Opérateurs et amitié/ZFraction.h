#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>

class ZFraction
{
public:

    ZFraction(int num = 0, int den = 1);

    //Affichage par amitié
    friend std::ostream& operator<<(std::ostream& flux, ZFraction const& fraction);

    //Opérateurs arithmétiques RACCOURCIS
    ZFraction& operator+=(ZFraction const& autre);
    ZFraction& operator*=(ZFraction const& autre);

    //Opérateurs de comparaison par amitié
    friend bool operator==(ZFraction const& a, ZFraction const& b);
    friend bool operator<(ZFraction const& a, ZFraction const& b);

private:

    int m_numerateur;
    int m_denominateur;

    // Simplifie une fraction
    void simplifie();

};

//Opérateurs arithmétiques
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);

//Opérateurs externes de comparaison
bool operator!=(ZFraction const& a, ZFraction const& b);
bool operator>(ZFraction const& a, ZFraction const& b);
bool operator<=(ZFraction const& a, ZFraction const& b);
bool operator>=(ZFraction const& a, ZFraction const& b);

//Calcul du pgcd
int pgcd(int a, int b);

#endif