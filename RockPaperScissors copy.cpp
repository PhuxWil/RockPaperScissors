#include <iostream>
#include <ctime>

using namespace std;

// Function prototypes
void rules();
void intro();
void you_win();
void you_lose();
void draw();
void scoreboard(int player, int computer);

int main(){
    char repeat; // Variable to repeat the game
    int playerscore = 0;
    int computerscore = 0;

    do {
        srand(time(NULL)); // Seed the random number generator
    // Game introduction and rules
        intro();
        rules();
   
    // User input and Computer Generated Input
        cout << "Enter your choice: ";
        int userChoice;
        cin >> userChoice;
        int cpuChoice = rand() % 3 + 1; // Generate a random int from 1-3
       

    // Game Logic
    // User Choices
        if (userChoice == 1){
            cout << "You picked Rock. " << endl;

        } 
        else if (userChoice == 2 ){
            cout << "You picked Paper. " << endl;

        }
        else if (userChoice == 3){
            cout << "You picked Scissors. " << endl;

        }
        else if (userChoice == 4){
            cout << "Goodbye!" << endl;
            return 0;
        }
        else{
            cout << "Invalid choice. " << endl;
            return 0;
        }

        // Computer Choices
        if (cpuChoice == 1){
            cout << "The computer picked Rock. " << endl;

        } 
        else if (cpuChoice == 2 ){
            cout << "The computer picked Paper. " << endl;

        }
        else if (cpuChoice == 3){
            cout << "The computer picked Scissors. " << endl;

        }
        else {
            cout << "Invalid choice. " << endl;
            return 0;
        }

        // Determine Winner / Loser
        if (userChoice == 1){
            if (cpuChoice == 1){
                draw();
            }
            else if (cpuChoice == 2){
                you_lose();
                computerscore++;
            }
            else if (cpuChoice == 3){
                you_win();
                playerscore++;
            }
        } 
        else if (userChoice == 2){
            if (cpuChoice == 1){
                you_win();
                playerscore++;
            }
            else if (cpuChoice == 2){
                draw();
            }
            else if (cpuChoice == 3){
                you_lose();
                computerscore++;
            }
        } 
        else if (userChoice == 3){
            if (cpuChoice == 1){
                you_lose();
                computerscore++;
            }
            else if (cpuChoice == 2){
                you_win();
                playerscore++;
            }
            else if (cpuChoice == 3){
                draw();
            }
        } 
        else {
            cout << "Invalid choice. " << endl;
            return 0;
        }
        cout << "---------------------------------------" << endl;
        scoreboard(playerscore, computerscore);
        cout << "---------------------------------------" << endl;
        cout << "Play again? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y');
}

// Function Definitions
void you_win(){
    cout << "You win!" << endl;
}
void you_lose(){
    cout << "You lose!" << endl;
}
void draw(){
    cout << "It's a draw!" << endl;
}
void intro(){
    cout << "----------------------------------" << endl;
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "The rules are simple: " << endl;
    cout << "----------------------------------" << endl;
}
void rules(){
    cout << " Rocks beat Scissors " << endl;
    cout << " Scissors beat Paper " << endl;
    cout << " Paper beats Rock " << endl;
    cout << "----------------------------------" << endl;
    // Player Choices
    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" << endl;
    cout << "4 - Exit" << endl;
    cout << "----------------------------------" << endl;
    cout << "May the best win!" << endl;

}
void scoreboard(int player, int computer){
    cout << "Player: " << player << endl;
    cout << "Computer: " << computer << endl;
}