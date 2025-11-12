#ifndef __HUMAN_H
#define __HUMAN_H

#include <string>

// HEADER fil ska innehålla DEKLARATIONER inte DEFINITIONER - INTE INNEHÅLLA KOD
// void test(int a);
// void test(int a){ return a; }

// class Mammal{ // Däggdjur
//     // föder levande ungar
//     // diar sina barn
// virtual void Sound(){};
// };


// class Cat : public Mammal{
//     // mjuka
//     // sura
// void Sound() override { cout << "Mjau" }
// };

// class Dog : public Mammal{
//     // har päls
//     // är snälla
// void Sound() override { cout << "Voff" }
// };

// Vi ska skriva kod på ett ställe!!!
class GameCharacter{
public:    
    std::string name;
    int level;
    // int xPos, yPos
    // int speed

    virtual void act(){

    };
    virtual void mightLevelUp(){

    };

};


class Human : public GameCharacter { // BARA EN RITNING
private:
    int burpsInARow = 0;
    int age;

public:    
    Human(std::string name, int age);
    //const static std::string efternamn = "Holmberg";
    // metod = funktion INUTI en klass
    //metoder här inuti - ALLT OM KLASSEN LIGGER INUTI KLASSEN

    // setter function
    void setAge(int newAge);
    // getter function
    int getAge();

    // Hålla reda på hur måmga gånger i rad
    void act() override;
    void mightLevelUp() override;
};


class Fly : public GameCharacter{

public:
    Fly(std::string name);

    void act() override;
    void mightLevelUp() override;

};


#endif