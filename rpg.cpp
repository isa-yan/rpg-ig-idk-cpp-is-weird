#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <iostream>
//#include <tuple>

/*
clang++ -g rpg.cpp -o rpg
./rpg

*/

int main(){
    //setup player, health, and inventory
        int health = 100;   
        char keydown;
        std::string player_name;
        //std::tuple<std::string, int> player();
        std::vector<int> inventory;
        if (keydown=='i'){
            std::cout<<"you have "<<"\n";
            for (int i=0;inventory[i];i++){
                std::cout<<inventory[i]<<", ";
            }
        }

    //introduction
        char start;
        std::cout<<"what is your name gangsta?"<<"\n";
        std::cin>>player_name;
        std::cout<<"hello "<<player_name<<" to the world of 1920s Chicago"<<"\n";
        std::cout<<"here you'll face gangs, mobsters, and crime. also a lot a alcohol"<<"\n";
        std::cout<<"this'll be the start of your journey. whether you decide to be an incorruptible bastion of good or a cop with their own agenda, that is up for you to decide"<<"\n";
        std::cout<<"if you want to start right now, click 'y'. otherwise click 'n'"<<"\n";
        std::cin>>start;
        switch(start){
            case 'n':
                break;
            case 'y':
                std::cout<<"let's go officer. time to go back home to Chicago";
        }

    //script broke in previous version and i didn't know why so that's gone now! :D


        
        

    return 0;
}