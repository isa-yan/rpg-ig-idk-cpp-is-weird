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
            for (int i=0;i<inventory.size();i++){
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

        vector<string> intrograph = {"welcome to the world of 1920s Chicago", "here you'll face gangs, mobsters, and crime. also a lot a alcohol",
            "this'll be the start of your journey. whether you decide to be an incorruptible bastion of good or a cop with their own agenda, that is up for you to decide",
            "if you want to start right now, click 'y'. otherwise click 'n'"};

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
            "your mom has been struggling with her chronic coughing and back pain espicially badly recently",
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
            "'I was originally here to return your gun that you left in the meeting room', he adds, placing it gently on the table you've been moping by for hours at this point",
            "'I also have some cash for you too', Captain Parker smiles softly at you",
            "'I know your family has been struggling for a while now'",
            "'Take this as a token of appreciation for your efforts', he straightens his cap, 'get your mam something nice, eh?'",
            "You take a quick skim. Looks to be around 2k. Too much for a lowly officer like yourself",
            "'I can't take this, Captain Parker', you state as you search for a shadow or a twist of the wind that captain might have left",
            "yet all you can hear are the faint footsteps of Captain Parker, dissipating and tapping lightly against the mahagony floors",
            "you stare the cash, wondering whether to pick up your gun or the wad of cash Captain Parker handed you."

        };

            for (int i=0;i<script_A.size();i++){
                cin>>keydown;
                if (keydown=='e')
                    cout<<script_A[i]<<"\n";
                
            }

            cout<<"PRESS 'G' TO TAKE THE GUN"<<"\n";
            cout<<"OR PRESS 'C' TO TAKE THE WAD OF CASH"<<"\n";

            vector<bool> inventory_choices = {false,false};
        
            cin>>keydown;
            if (keydown=='g'){
                inventory_choices[0]=true;
                inventory.push_back("gun");
                cout<<"with a strange sense of bitter pride deepset in your heart, you took your service weapon"<<"\n";
                if (inventory_choices[0]==true)
                    inventory_choices[1]=false;

            }else if (keydown=='c'){
                inventory_choices[1]=true;
                inventory.push_back("cash");
                cout<<"you falter a bit, your stomach churning with giddiness and guilt, before picking up the wad of cash"<<"\n";
                if (inventory_choices[1]==true)
                    inventory_choices[0]==false;

            }else{
                cin>>keydown;
            }

            vector<string> ambush_script = {
                "Quickly, a boom echoes through the room",
                "You hear Captain Parker yell 'DUCK!!!'",
                "as gunfire echoes through the room you feel your eardrums bleed",
                "your eyesight falters as you find a desk to hide behind, breathing heavily, bandaging the wounds you sustained",
                "not the worst, just a bullet grazing your arm and leg",
                "a figure steps before you, draped in black with a pinstriped fedora on top his head",
                "'A cop eh,' he snickers at you",
                "he grabs you by your hair, the delicate strands yanked from your scalp as you hold in the pain",
                "he laughs",
                "coldy",
                "unlike any laugh you've heard before. even from ones you've fought in the streets, in gunfights and action that you once dreamed of as a child",
                "your boss owes us something",
                "he looks at you, blue eyes meeting your own as he lets go of your hair",
                "kicking you in the shins and in the face, leaving your eyes purple and lips black",
                "get ready, he looks at you",
                "the look",
                "'oh the look in his eyes'",
                "the glint in his pupils. iced and sharp. nothing was behind those irises",
                "a realization hits you",
                "        he's enjoy this        ",
                "he's enjoying humiliating you",
                "he has the upper hand",
                "he has a tommy gun in his hand",
                "'Before I deal with you, however'",
                "he smiles",
                "'Dear Captain Parker's going to see why he should never cross the outfit'"


            };


    


    return 0;
}