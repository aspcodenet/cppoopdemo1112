#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>

// 1. OOP Grunder - tänk! Leta SUBSTANTIV - vi spånar webshop
//   Customer 
//   Product
//   ShoppingCart - "lista med produkter + antal" 


// Customer
//    många Messages

// 2. structs vs classes
//          Classes + Structs  = ritning (blueprint)
//           Objects = instans - en sak som är skapad från ritning
// 3. vi kör Stefans OOP Dinner
//          det finns människor i Stefans hus
//          människor har
//                       - level (0 till att börja med)
//                       - namn
//                       - age
//          människor kan
//                       - agera (antingen äta, dricka eller rapa)
//                       - levla upp (om man rapar tre gånger på raken så levlar man upp en nivå)
// 4. Inkapsling
// 5. SPLITTA I cpp och h-filer
// 6. I vector...

// 7. ÖVERKURS arv 13:00
//         det finns också ... FLUGOR

// C++ så är struct och class SAMMA sak - liten skillnad i det vi kallar för Access modifiers
class Human { // BARA EN RITNING
private:
    int burpsInARow = 0;

public:    
    std::string name;
    int level;
    int age;
    // metod = funktion INUTI en klass
    //metoder här inuti - ALLT OM KLASSEN LIGGER INUTI KLASSEN

    // Hålla reda på hur måmga gånger i rad
    void act(){
        std::string actions[]={"eats","drinks","burps"};
        int index = rand()%3;        
        if(actions[index] == "burps"){
            burpsInARow++;
        }else{
            burpsInARow = 0;
        }
        std::cout << name << " " << actions[index] << std::endl;
    }
    void mightLevelUp(){
        if(burpsInARow == 3 ){
            level++;
            std::cout << name << " har levlat upp till "  << level << std::endl;
        }
       //if(tregångerpårad) // level++
    }
};

// typedef struct  { // BARA EN RITNING
//     std::string name;
//     int level;
//     int age;
//     //metoder här inuti
// }Human;



int main(){
        
    Human stefan; // Human är en klass, stefan är ett OBJEKT (variabel av class)
    Human kerstin; // Human är en klass, kerstin är ett OBJEKT (variabel av class)
    Human oliver; //Human är en klass, oliver är ett OBJEKT (variabel av class)

    stefan.name = "Stefan";
    stefan.level = 0;
    stefan.age = 53;

    kerstin.name = "Kerstin";
    kerstin.level = 0;
    kerstin.age = 52;

    oliver.name = "Oliver";
    oliver.level = 0;
    oliver.age = 17;

    // ShoppingCart cart;
    // Product product;

    // cart.add(product);
    // int total = cart.CalculateTotal();


    srand((unsigned) time(NULL));
    //Game loop
    while(true){
        //Alla aktörer gör nåt 
        stefan.act();
        kerstin.act();
        oliver.act();
        //Alla aktörer kanske levlar upp
        stefan.mightLevelUp();
        kerstin.mightLevelUp();
        oliver.mightLevelUp();

        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}