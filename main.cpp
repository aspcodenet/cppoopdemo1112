#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
// 1. OOP Grunder - tänk! Leta SUBSTANTIV - vi spånar webshop
// 2. structs vs classes
// 3. vi kör Stefans OOP Dinner
//          det finns människor i Stefans hus
//          människor har
//                       - level (0 till att börja med)
//                       - namn
//          människor kan
//                       - agera (antingen äta, dricka eller rapa)
//                       - levla upp (om man rapar tre gånger på raken så levlar man upp en nivå)
// 4. Inkapsling
// 5. I vector...

// 6. ÖVERKURS arv
//         det finns också ... FLUGOR


int main(){
    srand((unsigned) time(NULL));
    //Game loop
    while(true){
        //Alla aktörer gör nåt 
        //Alla aktörer kanske levlar upp
        std::cout << "Press key for next turn " << std::endl;
        std::cin.get();
    }
    return 0;
}