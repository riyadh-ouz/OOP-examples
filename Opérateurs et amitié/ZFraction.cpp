#include "ZFraction.h"
using namespace std;

//Constructeur
ZFraction::ZFraction(int num, int den)
    :m_numerateur(num), m_denominateur(den)
{
    simplifie();
}

//Affichage par amitié
//Opérateur d'injection dans un flux
ostream& operator<<(ostream& flux, ZFraction const& fraction)
{
    if (fraction.m_denominateur == 1)
    {
        flux << fraction.m_numerateur;
    }
    else
    {
        flux << fraction.m_numerateur << '/' << fraction.m_denominateur;
    }
    return flux;
}

//Opérateurs arithmétiques RACCOURCI
ZFraction& ZFraction::operator+=(ZFraction const& autre)
{
    m_numerateur = autre.m_denominateur * m_numerateur + m_denominateur * autre.m_numerateur;
    m_denominateur = m_denominateur * autre.m_denominateur;

    simplifie();
    return *this;
}

ZFraction& ZFraction::operator*=(ZFraction const& autre)
{
    m_numerateur *= autre.m_numerateur;
    m_denominateur *= autre.m_denominateur;

    simplifie();
    return *this;
}

//Opérateurs de comparaison par amitié
bool operator==(ZFraction const& a, ZFraction const& b)
{
    if (a.m_numerateur == b.m_numerateur && a.m_denominateur == b.m_denominateur)
        return true;
    else
        return false;
}
bool operator<(ZFraction const& a, ZFraction const& b)
{
    if (a.m_numerateur * b.m_denominateur < a.m_denominateur * b.m_numerateur)
        return true;
    else
        return false;
}

//Simplification
void ZFraction::simplifie()
{
    int nombre=pgcd(m_numerateur, m_denominateur); //Calcul du pgcd

    m_numerateur /= nombre;     //Et on simplifie
    m_denominateur /= nombre;
}

//Opérateurs arithmétiques
ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie += b;
    return copie;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie *= b;
    return copie;
}

//Opérateurs externes de comparaison
bool operator!=(ZFraction const& a, ZFraction const& b)
{
    return !(a == b);
}

bool operator>(ZFraction const& a, ZFraction const& b)
{
    return b < a;
}

bool operator<=(ZFraction const& a, ZFraction const& b)
{
    return a < b || a == b;
}

bool operator>=(ZFraction const& a, ZFraction const& b)
{
    return a > b || a == b;
}

//Calcul du pgcd
int pgcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}