#include <stdexcept>
#include <iostream>
#include "human.h"


Human::Human(std::string name, int age)
{
       this->name = name; 
       setAge(age);
       level = 0;
}


void Human::setAge(int newAge){
    if(newAge < 0 || newAge > 150){
        throw std::invalid_argument("Argument for age is not valid");
    }
    age = newAge;
}

int Human::getAge(){
    return age;
}

void Human::act(){
        std::string actions[]={"eats","drinks","burps"};
        int index = rand()%3;        
        if(actions[index] == "burps"){
            burpsInARow++;
        }else{
            burpsInARow = 0;
        }
        std::cout << name << " " << actions[index] << std::endl;
    }


void Human::mightLevelUp(){
    if(burpsInARow == 3 ){
        level++;
        std::cout << name << " har levlat upp till "  << level << std::endl;
    }
//if(tregångerpårad) // level++
}
