#include <iostream>
#include <string>
#include <stdlib.h> //using this for the random library
#include <time.h> //using this for the random library
using namespace std;



void play(string userChoice, string computerChoice)
{
  int userPoints = 0;
  int computerPoints = 0;
  int tie = 0;
  string userDecision = "yes";
  string choices[3] = {"Rock", "Paper", "Scissors"}; //array to store the options the computer can choose
  while (userDecision == "yes")
  {  
    
    cout << endl << "Choose one of the following: Rock (r), Paper (p), or Scissors (s) : ";
    cin >> userChoice;  
    string computerChoice = choices[rand() % 3]; //making a variable to store the random choice made by the computer

//computer and user decision: 
    
    if (userChoice == "r")
    {
      cout << endl << "You have chosen: Rock" << endl;
      cout << "The computer has chosen: " << computerChoice;
    }
    else if (userChoice == "p")
    {
      cout << endl << "You have chosen: Paper" << endl;
      cout << "The computer has chosen: " << computerChoice;
    }
    else
    {
      cout << endl << "You have chosen: Scissors" << endl;
      cout << "The computer has chosen: " << computerChoice;
    }
    
    cout << endl;
    
    if (userChoice == "p" && computerChoice == "Paper" || userChoice == "r" && computerChoice == "Rock" || userChoice == "s" && computerChoice == "Scissors")
    {
      tie++;
      cout << endl << "That's a tie!" << endl;
    }
      
    else if (userChoice == "r" && computerChoice == "Scissors")
    {
      userPoints++;
    }
    else if (userChoice == "s" && computerChoice == "Paper")
    {
      userPoints++;
    }
    else if (userChoice == "p" && computerChoice == "Rock")
    {
      userPoints++;
    }
    else
    {
      computerPoints++;
    }

    cout << endl << "Your score: " << userPoints << endl;
    cout << "Computer score: " << computerPoints << endl;
    cout << "Tie: " << tie << endl;
    
//starting to tally the amount of points the computer and User get: 
    

//asking whether the user would like to continue:
    
    cout << endl << "Would you like to keep going? (yes/no) " << endl;
    cin >> userDecision;
    cout << endl << "⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯" << endl; //to make the program look nice
    if (userDecision == "yes")
    {
      continue;
    }

//ending the game:
    else
    {
      cout << endl << "Your final score: " << userPoints << endl;
      cout << "Computer final score: " << computerPoints << endl;
      cout << "Tie: " << tie << endl;
      cout << endl << "!GAME OVER!" << endl;
      break;
    }
  
  }
}



void intro(string userChoice, string computerChoice)
{
  if (userChoice == "yes")
  {
    play(userChoice, computerChoice);
  }
  else if (userChoice == "no")
  {
    cout << "Too bad! You're already here!" << endl;
    play(userChoice, computerChoice);
  }
}


int main() 
{
  string userChoice;
  string computerChoice;  
  cout << "Ready to play Rock, Paper, Scissors? (yes/no): ";
  cin >> userChoice;
  if (userChoice == "yes" || userChoice == "no") //to make sure the user enters the right response
  {    
    intro(userChoice, computerChoice);

  }
  else
  {    
    cout << "You must enter a valid response" << endl;
    main();
  }
  return 0; 
}
