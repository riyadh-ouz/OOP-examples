def pgcd(a, b):
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    
    return a

class Fraction:
    
    def __init__(self, a = 0, b = 1):
        self.__numerateur = a
        self.__denominateur = b
        if a != 0:
            self.__simplifier()
        
    def __repr__(self):
        if self.__denominateur == 1:
            return str(self.__numerateur)
        return "{0}/{1}".format(self.__numerateur, self.__denominateur)

    @property
    def numerateur(self):
        return self.__numerateur
    
    @numerateur.setter
    def numerateur(self, a):
        self.__numerateur = a
        
    @property
    def denominateur(self):
        return self.__denominateur
    
    @denominateur.setter
    def denominateur(self, a):
        if a == 0: raise ValueError
        self.__denominateur = a

    
    def __eq__(self, other):
        return (self.__numerateur == other.__numerateur and self.__denominateur == other.__denominateur)
    
    def __lt__(self, other):
        return (self.__numerateur * other.__denominateur < self.__denominateur * other.__numerateur)

    def __gt__(self, other):
        return other < self

    def __le__(self, other):
        return self < other or self == other

    def __ge__(self, other):
        return not(self < other)


    def __add__(self, other):
        return Fraction(other.__denominateur * self.__numerateur + self.__denominateur * other.__numerateur, self.__denominateur * other.__denominateur)

    def __mul__(self, other):
        return Fraction(self.__numerateur * other.__numerateur, self.__denominateur * other.__denominateur)

    def __simplifier(self):
        nombre = pgcd(self.__numerateur, self.__denominateur)
        self.__numerateur /= nombre
        self.__denominateur /= nombre

if __name__ == "__main__":
    print("Riyouz")
    
