
// ( 2 player rock , paper , scissors game )

#include <iostream>
#include <random>
using namespace std;

class game{

public:
string player1 ;
string player2 ;
int choo = 0;

    void instruction(){
        cout<<endl<<"------------- WElCOME TO ROCK, PAPER, SCISSORS GAME -------------"<<endl<<endl;
        cout<<"----[ RULES ]----"<<endl;
        cout<<"1. ROCK beats SCISSORS"<<endl;
        cout<<"2. PAPER beats ROCK"<<endl;
        cout<<"3. SCISSORS beats PAPER"<<endl<<endl<<"-----------------------------------------------------------------"<<endl<<endl;
        cout<<"PLAYER 1 & PLAYER 2 "<<endl<<endl;
        cout<<"----------------- PLAY WITH ? -----------------"<<endl;
        cout<<"CHOOSE : 1. 2 player "<<endl;
        cout<<"         2. play with AI"<<endl<<endl; 
        cout<<"( Who to play with? ) Write number here : ";
        cin>>choo;
        cout<<endl<<endl;

        if (choo == 1)
        {
          choose();
        }
        else if(choo == 2){
          ai();
        }
        else{
         cout<<"Type number correctly example : for play with AI type 2"<<endl;
        }
        
        
    }

    void choose(){

        cout<<"CHOOSE : rock , paper , scissors"<<endl;
        cout<<"PLAYER 1 = ";
        cin>>player1;
        
        cout<<endl<<"CHOOSE : rock , paper , scissors"<<endl;
        cout<<"PLAYER 2 = ";
        cin>>player2;
    }

    void ai(){

        cout<<"CHOOSE : rock , paper , scissors"<<endl;
        cout<<"PLAYER 1 = ";
        cin>>player1;


        // Create a random number generator 
         random_device rd;  
         mt19937 gen(rd()); 

         // Define the range of the random number (1 to 3)
         uniform_int_distribution<> dis(1, 3);

         // Generate a random number
         int random_number = dis(gen);

       // Output the random number
         // cout << "Random number between 1 and 3: " << random_number << std::endl;

         if (random_number==1)
         {
            player2="rock";
            cout<<"player 2 (AI) = rock"<<endl<<endl;
            cout<<"_______playing with AI_______"<<endl;
         }
         if (random_number==2)
         {
            player2="paper";
            cout<<"player 2 (AI) = paper"<<endl<<endl;
            cout<<"_______playing with AI_______"<<endl;
            
         }
         if (random_number==3)
         {
            player2="scissors";
            cout<<"player 2 (AI) = scissors"<<endl<<endl;
            cout<<"_______playing with AI_______"<<endl;
         }
    }

    void condition(){
//draw condition        
        if(player1 == "rock" && player2 == "rock" ||
           player1 == "paper" && player2 == "paper" ||
           player1 == "scissors" && player2 == "scissors" ){

            cout<<endl<<"----- DRAW -----"<<endl;

        }
//draw condition        
//error condition
        if(player1 == "rock" && player2 == "paper" ||
           player1 == "rock" && player2 == "scissors" ||
           player1 == "paper" && player2 == "scissors" ||
           player1 == "paper" && player2 == "rock" ||
           player1 == "scissors" && player2 == "paper" ||
           player1 == "scissors" && player2 == "rock" 
           ){
        }
        else{
           cout<<endl<<"----- Please enter correct words ! -----"<<endl;
        }
  
//error condition
//winning condition
        if(player1 == "rock" && player2 == "paper"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "scissors" && player2 == "rock"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "paper" && player2 == "scissors"){
           cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
        }
        else if(player1 == "rock" && player2 == "scissors"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }
        else if(player1 == "paper" && player2 == "rock"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }
        else if(player1 == "scissors" && player2 == "paper"){
           cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
        }   
    }
//winning condition    

};

int main() {
 
 game obj1;
 obj1.instruction();
 obj1.condition();
 

}