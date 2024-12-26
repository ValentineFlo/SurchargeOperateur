// SurchargeOperateur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

class Vec2
{
public:
    int x, y;
    Vec2(int X, int Y) : x(X), y(Y){}
    Vec2 operator+(const Vec2& other)
    {
        Vec2 result(this->x +other.x, this->y+ other.y);
        return result;
    }

    friend std::ostream& operator << (std::ostream& flux, const Vec2& vec)
    {
        flux << '(' << vec.x << "." << vec.y << ')' << std::endl;
        return flux;
    }
    // la classe doit etre une classe amie surcharge interne
};

//// en dehors de la classe 
//std::ostream& operator << (std::ostream& flux, Vec2& vec)
//    {
//        flux << '(' << vec.x << "." << vec.y << ')' << std::endl;
//        return flux;
//    } // surcharge externe


int main()
{
    Vec2 vec2(2,8);
    Vec2 vec21(3, 1);

    std::cout << vec2 + vec21 << std::endl;
}

