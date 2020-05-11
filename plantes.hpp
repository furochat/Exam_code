#include <iostream>
#include <limits>
#include <string>

#if !defined(fleur)
#define fleur


class fleur
{
    public:
        fleur();
        

    private:
        std:: string nom;
        int age;
        int taille;
        int santé;
        float croissance;
    
};

class planteCarnivore
{
    public:
        planteCarnivore();
        

    private:
        std:: string nom;
        int age;
        int taille;
        int santé;
        float croissance;
    
};

#endif
