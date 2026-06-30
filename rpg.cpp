#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <iostream>

/*
clang++ -g rpg.cpp -o rpg
./rpg

*/

int main(){
    //setup player, health, and inventory
    int player = true;
    int health = 100;   
    char keydown;
    std::vector<int> inventory;
    inventory.push_back(4);
    std::cin>>keydown;
    if (keydown=='i'){
        std::cout<<"you have "<<"\n";
        for (int i=0;inventory[i];i++){
            std::cout<<inventory[i]<<", ";
        }
    }

    return 0;
}