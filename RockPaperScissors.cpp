#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Time.h>

int main() {

  /* This program will simulate playing rock
  paper scissors by allowing the
  player to choose which they will pick, followed
  by the AI, then comparing the results. */

  //Variable initialization
  int ai;
  int user;

  //Random generator
  srand(time(NULL));
  ai = rand() % 3 + 1;

  //Flavor Text and Rules
  std::cout << "-------------\n";
  std::cout << "Let's play Rock, Paper, Scissors!\n";
  std::cout << "-------------\n\n";

  std::cout << "Make your choice!\n";
  std::cout << "1. Rock\n";
  std::cout << "2. Paper\n";
  std::cout << "3. Scissors\n\n";
  std::cout << "-------------\n\n";

  std::cin >> user; //Get user input

  std::cout << "SHOOT!\n";
  std::cout << "-------------\n\n";

  //Game logic
    //User choice is rock
  if (user == 1 && ai == 1) {
    std::cout << "Rock...\n";
    std::cout << "VS\n";
    std::cout << "Rock!\n";
    std::cout << "-------------\n";
    std::cout << "DRAW!!";
  }
  else if (user == 1 && ai == 2) {
    std::cout << "Rock...\n";
    std::cout << "VS\n";
    std::cout << "Paper!\n";
    std::cout << "-------------\n";
    std::cout << "YOU LOSE!!";
  }
  else if (user == 1 && ai == 3) {
    std::cout << "Rock...\n";
    std::cout << "VS\n";
    std::cout << "Scissors!\n";
    std::cout << "-------------\n";
    std::cout << "YOU WIN!!";
  }
    //User choice is paper
  if (user == 2 && ai == 1) {
    std::cout << "Paper...\n";
    std::cout << "VS\n";
    std::cout << "Rock!\n";
    std::cout << "-------------\n";
    std::cout << "YOU WIN!!";
  }
  else if (user == 2 && ai == 2) {
    std::cout << "Paper...\n";
    std::cout << "VS\n";
    std::cout << "Paper!\n";
    std::cout << "-------------\n";
    std::cout << "DRAW!!";
  }
  else if (user == 2 && ai == 3) {
    std::cout << "Paper...\n";
    std::cout << "VS\n";
    std::cout << "Scissors!\n";
    std::cout << "-------------\n";
    std::cout << "YOU LOSE!!";
  }
    //User choice is scissors
  if (user == 3 && ai == 1) {
      std::cout << "Scissors...\n";
      std::cout << "VS\n";
      std::cout << "Rock!\n";
      std::cout << "-------------\n";
      std::cout << "YOU LOSE!!";
    }
    else if (user == 3 && ai == 2) {
      std::cout << "Scissors...\n";
      std::cout << "VS\n";
      std::cout << "Paper!\n";
      std::cout << "-------------\n";
      std::cout << "YOU WIN!!";
    }
    else if (user == 3 && ai == 3) {
      std::cout << "Scissors...\n";
      std::cout << "VS\n";
      std::cout << "Scissors!\n";
      std::cout << "-------------\n";
      std::cout << "DRAW!!";
    }
}