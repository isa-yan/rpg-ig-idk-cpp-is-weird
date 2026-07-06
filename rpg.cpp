#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <iostream>
using namespace std;
//#include <tuple>

/*
clang++ -std=c++17 -g rpg.cpp -o rpg
./rpg

*/

int main(){
    //setup player, health, and inventory
        int health = 100;   
        char keydown;
        string player_name;
        //std::tuple<std::string, int> player();
        vector<int> inventory;
        if (keydown=='i'){
            ::cout<<"you have "<<"\n";
            for (int i=0;inventory[i];i++){
                cout<<inventory[i]<<", ";
            }
        }

    //introduction
        char start;
        cout<<"what is your name gangsta?"<<"\n";
        cin>>player_name;
        cout<<"hello "<<player_name<<" to the world of 1920s Chicago"<<"\n";
        cout<<"here you'll face gangs, mobsters, and crime. also a lot a alcohol"<<"\n";
        cout<<"this'll be the start of your journey. whether you decide to be an incorruptible bastion of good or a cop with their own agenda, that is up for you to decide"<<"\n";
        cout<<"if you want to start right now, click 'y'. otherwise click 'n'"<<"\n";
        cin>>start;
        switch(start){
            case 'n':
                break;
            case 'y':
                cout<<"let's go officer. time to go back home to Chicago"<<"\n";
        }

    //story start
        vector<string> script_A = {"You open your eyes to find yourself in the police station","it's been a hard time for you lately","crime has been spreading throughout Chicago"};
            for (int i=0;i<script_A.size();i++){
                cin>>keydown;
                if (keydown=='e'){
                    cout<<script_A[i]<<"\n";
                }
            }   
        


    return 0;
}