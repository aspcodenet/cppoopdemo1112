#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
#include <stdexcept>
#include "human.h"

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
// 4. Inkapsling + constructors
// vad är static, private, public,protected
// 5. I vector...
// 6. SPLITTA I cpp och h-filer

// 7. ÖVERKURS arv 13:00
//         det finns också ... FLUGOR

// C++ så är struct och class SAMMA sak - liten skillnad i det vi kallar för Access modifiers

// typedef struct  { // BARA EN RITNING
//     std::string name;
//     int level;
//     int age;
//     //metoder här inuti
// }Human;

typedef struct {
    int amount;
//    char messages[3][20];
    char message1[20];
    char message2[20];
    char message3[20];
    int antalUsed; // 2
}Customer;

int main(){
    std::vector<Human> humans;
    Human stefan ("Stefan",53);
    Human kerstin("Kerstin",52); // Human är en klass, kerstin är ett OBJEKT (variabel av class)
    Human oliver("Oliver",17); //Human är en klass, oliver är ett OBJEKT (variabel av class)


    stefan.setAge(stefan.getAge() + 1);

    humans.push_back(stefan);
    humans.push_back(kerstin);
    humans.push_back(oliver);




    srand((unsigned) time(NULL));
    //Game loop
    while(true){
        // Om vi level2 Svamp // humans.push_back()
        //Alla aktörer gör nåt 
        for(Human human : humans){
            human.act();
        }
        // C style index based loop
        // for(int i = 0; i < humans.size(); i++){
        //     humans[i].act();
        // }

        //Alla aktörer kanske levlar upp
        for(Human human : humans){
            human.mightLevelUp();
        }
        // for(int i = 0; i < humans.size(); i++){
        //     humans[i].mightLevelUp();
        // }


        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}