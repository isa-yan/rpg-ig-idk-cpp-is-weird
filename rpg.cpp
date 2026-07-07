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
        vector<string> inventory;
        if (keydown=='i'){
            ::cout<<"you have "<<"\n";
            for (int i=0;inventory[i];i++){
                cout<<inventory[i]<<", ";
                cin>>keydown;
            }
        }

    //introduction
        char start;
        cout<<"press 'e' to go forward"<<"\n";
        cout<<"what's your name?"<<"\n";
        cin>>player_name;
        cout<<"hello "<<player_name<<" press e to continue";
        cin>>keydown;
        vector<string> intrograph = {"welcome to the world of 1920s Chicago", "here you'll face gangs, mobsters, and crime. also a lot a alcohol","this'll be the start of your journey. whether you decide to be an incorruptible bastion of good or a cop with their own agenda, that is up for you to decide","if you want to start right now, click 'y'. otherwise click 'n'"};
        for (int i=0;i<intrograph.size();i++){
            cin>>keydown;
            if (keydown=='e'){
                cout<<intrograph[i]<<"\n";
            }
        }

        cin>>start;

        switch(start){
            case 'n':
                break;
            case 'y':
                cout<<"let's go officer. time to go back home to Chicago"<<"\n";
        }
    
            

    //story start
        vector<string> script_A = {"You open your eyes to find yourself in the police station",
            "it's been a hard time for you lately",
            "crime has been spreading throughout Chicago",
            "your mom has been struggling with her dementia more and more",
            "the wife isn't happy with life either",
            "you smoke a cig while standing near a window of the police station",
            "'What was I expecting?'",
            "you ask yourself",
            "'When did it all go downhill",
            "you chuckle to yourself",
            "'they've been going downhill for some time now' you think bitterly",
            "footsteps chime in from across the hall",
            "a strong sound, faintly thumping and radiating through the creaky wooden floorboards",
            "\n",
            "'Hello officer', a warm, mildly Scottish voice adds.",
            "'Greetings, Captain Parker', you answer, quickly stifling the cigarrette under your foot",
            "'You alright?', he asks, 'you've been down recently'",
            "'I...I'm fine.', you answer nonchalantly",
            "'You sure?'",
            "'I'm sure sir.'",
            "'Alright then', he smiles, 'I'm glad to hear that'",

        };

            for (int i=0;i<script_A.size();i++){
                cin>>keydown;
                if (keydown=='e')
                    cout<<script_A[i]<<"\n";
                
            }

            vector<bool> inventory_choices = {false,false,false,false};
        
            cout<<"'Your gun, officer', he adds, 'would you like it?'";
            cin>>keydown;
            if (keydown=='y'){
                inventory_choices[0]=true;
                inventory.push_back("gun");
            }else{
                cin>>keydown;s
            }
    


    return 0;
}