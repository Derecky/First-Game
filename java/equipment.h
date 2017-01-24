#ifndef EQUIPES_H_INCLUDED
#define EQUIPES_H_INCLUDED


#include <iostream>
#include "player.h"

using namespace std;
enum Rarity {common, uncommon, rare, mythical, epic, divine};
enum Color_rarity {white, blue, orange , purple, red , golden};

class Item {
    private:
        Item(){};
        ~Item(){};

    public:

    /* Atributes */
        char name[24];
        char description[128];

    /* Methods */
        void view(){
            cout << name << endl << endl << description << endl;
        }

        void discard(){};
};

class Equipment : public Item {
    private:
        Equipment();
        ~Equipment();

    public:

    /* Atributes */
        int durability;
        Rarity rarity;
        int enhance_;


    /* Methods */
        void  equip(){}

        void desequip(){}
};

class Material : Item {
    private:
        Material(){};
        ~Material(){};

    public:
        /* Atributes */
        int quantity;

        /* Methods */
        //Add blueprints to forge: list forge();
};

class Consumable : public Item {
    private:
        Consumable(){};
        ~Consumable(){};

    public:
         /* Atributes */
        int quantity;

        /* Methods */
        void use(){};
};


#endif // EQUIPES_H_INCLUDED
