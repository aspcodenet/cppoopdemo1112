#ifndef __HUMAN_H
#define __HUMAN_H

#include <string>

// HEADER fil ska innehålla DEKLARATIONER inte DEFINITIONER - INTE INNEHÅLLA KOD
// void test(int a);
// void test(int a){ return a; }

class Human { // BARA EN RITNING
private:
    int burpsInARow = 0;
    int age;

public:    
    Human(std::string name, int age);
    //const static std::string efternamn = "Holmberg";
    std::string name;
    int level;
    // metod = funktion INUTI en klass
    //metoder här inuti - ALLT OM KLASSEN LIGGER INUTI KLASSEN

    // setter function
    void setAge(int newAge);
    // getter function
    int getAge();

    // Hålla reda på hur måmga gånger i rad
    void act();
    void mightLevelUp();
};


#endif