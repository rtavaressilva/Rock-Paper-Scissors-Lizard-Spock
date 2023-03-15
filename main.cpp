/* This program implements the game "Rock, Paper, Scissor, Lizard, Spock", as seen on the show The Big Bang Theory. In this version, the computer chooses one option randonly while the user chooses another.
*/
#include <iostream>
#include <stdlib.h>

int main() {
    srand (time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "=====================" << std::endl;
    std::cout << " rock paper scissors!" << std::endl;
    std::cout << "=====================" << std::endl;


    std::cout << "1) ROCK" << std::endl;
    std::cout << "2) PAPER" << std::endl;
    std::cout << "3) SCISSORS" << std::endl;
    std::cout << "4) LIZARD" << std::endl;
    std::cout << "5) SPOCK" << std::endl;

    std::cout << "Shoot!" << std::endl;
    std::cin >> user;
    std::cout << "User: " << user << " PC: " << computer << std::endl;


//Apply Rock, Paper, Scissors logic using if Statements:
// USER PICKS ROCK
    if (user == 1) {
        if (computer == 1) {
            std::cout << "Draw. Try again!" << std::endl;
        } else if (computer == 2) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 3) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 4) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 5) {
            std::cout << "Computer wins!" << std::endl;
        }
//USER PICKS PAPER
    } else if (user == 2) {
        if (computer == 1) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 2) {
            std::cout << "Draw. Try again!" << std::endl;
        } else if (computer == 3) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 4) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 5) {
            std::cout << "User wins!" << std::endl;
        }
//USER PICKS SCISSORS
    } else if (user == 3) {
        if (computer == 1) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 2) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 3) {
            std::cout << "Draw. Try again!" << std::endl;
        } else if (computer == 4) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 5) {
            std::cout << "Computer wins!" << std::endl;
        }
//USER PICKS LIZARD
    } else if (user == 4) {
        if (computer == 1) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 2) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 3) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 4) {
            std::cout << "Draw. Try again!" << std::endl;
        } else if (computer == 5) {
            std::cout << "User wins!" << std::endl;
        }
//USER PICKS SPOCK
    } else if (user == 5) {
        if (computer == 1) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 2) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 3) {
            std::cout << "User wins!" << std::endl;
        } else if (computer == 4) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computer == 5) {
            std::cout << "Draw. Try again!" << std::endl;
        }
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}