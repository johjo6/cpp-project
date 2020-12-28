#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int count){
  for(int i = 0; i < count; i++){
    std::cout << array[i] << "\t";
  }
  std::cout << "\n";
}

void play_game()
{
  int guesses[100];
  int guess_count = 0;

  int random = rand() % 101; 
  std::cout << "I've chosen a number from 0 to 100\n";
  std::cout << "Guess the number: ";
  while(true)
  {
    int guess;
    std::cin >> guess;

    guesses[guess_count] = guess;
    guess_count++;

    if(guess == random)
    {
      std::cout << "You won! \n";
      break;
    }else if(guess < random)
    {
      std::cout << "Too low, try again: ";
    }else
    {
      std::cout << "Too high, have another guess: ";
    }
  }
  print_array(guesses, guess_count);
}

int main()
{
  srand(time(NULL));
  int choice;
  

  do
  {
    std::cout << "0.Quit\n1.Play Game\n";
    std::cout << "Choose what to do: ";
    std::cin >> choice;

    switch(choice)
    {
      case 0:  
        std::cout << "ok.\n";
        return 0;
        break;
      case 1:
        play_game();
        break;
    }
  }
  while(choice != 0);
  
}
